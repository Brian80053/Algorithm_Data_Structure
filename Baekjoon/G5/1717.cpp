#include<cstdio>
using namespace std;
int node[1000001]={};
int find(int k){
    if(k==node[k]){
        return k;
    }
    else{
        return node[k]=find(node[k]);
    }
}
void join(int a,int b){
    a=find(a);
    b=find(b);
    node[a]=b;
    return;
}
int main(){
    int a,b,i;
    scanf("%d %d",&a,&b);
    for(i=1; i<=a; i++){
        node[i]=i;
    }
    int c,d,e;
    for(i=0; i<b; i++){
        scanf("%d %d %d",&c,&d,&e);
        if(c==0){
            join(d,e);
        }
        if(c==1){
            if(find(d)!=find(e)){
                printf("NO\n");
            }
            else{
                printf("YES\n");
            }
        }
    }
}