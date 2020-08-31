#include <stdio.h>

struct node {
    long from, to;
    long value;
};

int build_tree(struct node *tree,int *stations, long idx, long from, long to);
long find_section(struct node *tree, long idx, long from, long to);
int upd_point(struct node * tree, long idx, long p_idx, long value);

#define MAX (200000+5)

int students[MAX];
struct node tree[4*MAX];

int main(void) {
    long sn, cn, i;
    while(scanf("%ld %ld",&sn,&cn) != EOF){
        for(i = 0; i < sn; i++) scanf("%d",students+i);
        build_tree(tree, students, 0, 1, sn);
        for(i = 0; i < cn; i++){
            char cmd[2];
            scanf("%s",cmd);
            if(cmd[0] == 'Q'){
                long fidx, tidx;
                scanf("%ld %ld",&fidx,&tidx);
                printf("%ld\n",find_section(tree, 0,fidx, tidx));
            }
            else if(cmd[0] == 'U'){
                long idx;
                int value;
                scanf("%ld %d",&idx,&value);
                upd_point(tree, 0, idx, value);
            }
        }
    }
    return 0;
}

int build_tree(struct node *tree,int *students, long idx, long from, long to){
    tree[idx].from = from;
    tree[idx].to = to;
    if(from < to){
        build_tree(tree, students, 2*idx+1, from, (from+to)/2);
        build_tree(tree, students, 2*idx+2, (from+to)/2+1, to);
        tree[idx].value = (tree[2*idx+1].value)>(tree[2*idx+2].value)?(tree[2*idx+1].value):(tree[2*idx+2].value);
    }
    else tree[idx].value = students[from-1];
    return 0;
}

long find_section(struct node *tree, long idx, long from, long to){
    long h_idx = (tree[idx].from + tree[idx].to)/2;
    if(tree[idx].from == from && tree[idx].to == to)
        return tree[idx].value;
    if(from <= h_idx && to > h_idx){
        long f = find_section(tree, idx*2+1, from, h_idx), s = find_section(tree, idx*2+2, h_idx+1, to);
        return f>s?f:s;
    }
    else if(from <= h_idx && to <= h_idx) return find_section(tree, idx*2+1, from, to);
    else if(from > h_idx && to > h_idx) return find_section(tree, idx*2+2, from, to);
    else return 0;
}

int upd_point(struct node * tree, long idx, long p_idx, long value){
    long h_idx = (tree[idx].from+tree[idx].to)/2;
    if(tree[idx].from < tree[idx].to){
        if(p_idx <= h_idx) upd_point(tree, idx*2+1, p_idx, value);
        else upd_point(tree, idx*2+2, p_idx, value);
    }
    if(tree[idx].value < value) tree[idx].value = value;
    return 0;
}
