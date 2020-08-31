#include <stdio.h>

struct node {
    long from, to;
    unsigned long long value;
};

int build_tree(struct node *tree,int *stations, long idx, int from, int to);
unsigned long long find_section(struct node *tree, long idx, int from, int to);
int add_point(struct node * tree, long idx, int p_idx, int value);
int sub_point(struct node * tree, long idx, int p_idx, int value);

int stations[50000];
struct node tree[200000];

int main(void) {
    
    int no;
    scanf("%d",&no);
    int k,i;
    for(k = 0; k < no; k++){
        printf("Case %d:\n",k+1);
        int n;
        scanf("%d",&n);
        for(i = 0; i < n; i++){
            scanf("%d",&stations[i]);
        }
        build_tree(tree, stations, 0, 1, n);
        char order[6];
        while(scanf("%s",order) && order[0]!='E'){
            if(order[0]=='A'){
                int idx, peo;
                scanf("%d %d",&idx,&peo);
                add_point(tree, 0, idx, peo);
            }
            else if(order[0]=='S'){
                int idx, peo;
                scanf("%d %d",&idx,&peo);
                sub_point(tree, 0, idx, peo);
            }
            else if(order[0]=='Q'){
                int idxa, idxb;
                scanf("%d %d",&idxa,&idxb);
                printf("%llu\n",find_section(tree, 0, idxa, idxb));
            }
        }
    }
    return 0;
}

int build_tree(struct node *tree,int *stations, long idx, int from, int to){
    tree[idx].from = from;
    tree[idx].to = to;
    if(from - to){
        build_tree(tree, stations, 2*idx+1, from, (from+to)/2);
        build_tree(tree, stations, 2*idx+2, (from+to)/2+1, to);
        tree[idx].value = tree[2*idx+1].value + tree[2*idx+2].value;
    }
    else tree[idx].value = stations[from-1];
    return 0;
}


unsigned long long find_section(struct node *tree, long idx, int from, int to){
    long h_idx = (tree[idx].from + tree[idx].to)/2;
    unsigned long long sum = 0;
    if(tree[idx].from == from && tree[idx].to == to) return tree[idx].value;
    else if(from <= h_idx && to > h_idx)
        sum += find_section(tree, 2*idx+1, from, h_idx) + find_section(tree, 2*idx+2, h_idx+1, to);
    else if(from <= h_idx && to <= h_idx) sum += find_section(tree,2*idx+1, from, to);
    else if (from > h_idx && to > h_idx) sum += find_section(tree,2*idx+2, from, to);
    return sum;
}

int add_point(struct node * tree, long idx, int p_idx, int value){
    long h_idx = (tree[idx].from+tree[idx].to)/2;
    tree[idx].value += value;
    if(tree[idx].from < tree[idx].to){
        if(p_idx <= h_idx) add_point(tree, idx*2+1, p_idx, value);
        else add_point(tree, idx*2+2, p_idx, value);
    }
    return 0;
}

int sub_point(struct node * tree, long idx, int p_idx, int value){
    long h_idx = (tree[idx].from+tree[idx].to)/2;
    tree[idx].value -= value;
    if(tree[idx].from < tree[idx].to){
        if(p_idx <= h_idx) sub_point(tree, idx*2+1, p_idx, value);
        else sub_point(tree, idx*2+2, p_idx, value);
    }
    return 0;
}
