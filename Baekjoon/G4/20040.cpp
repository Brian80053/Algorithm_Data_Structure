#include<cstdio>
using namespace std;
int node[500001]={};
int find(int k){
    if(k==node[k]){
        return k;
    }
    return node[k]=find(node[k]);
}
void join(int p,int q){
    p=find(p);
    q=find(q);
    node[q]=p;
    return;
}
int main(){
    int a,b,i;
    scanf("%d %d",&a,&b);
    for(i=0; i<a; i++){
        node[i]=i;
    }
    int c,d;
    for(i=1; i<=b; i++){
        scanf("%d %d",&c,&d);
        if(find(c)==find(d)){
            printf("%d",i);
            return 0;
        }
        else{
            join(c,d);
        }
    }
    printf("0");
    return 0;
}