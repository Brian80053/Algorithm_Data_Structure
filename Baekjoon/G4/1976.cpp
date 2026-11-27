#include<cstdio>
#include<queue>
using namespace std;
int node[201]={};
int find(int k){
    if(k==node[k]){
        return k;
    }
    else{
        return node[k]=find(node[k]);
    }
}
void merge(int a,int b){
    a=find(a);
    b=find(b);
    node[a]=b;
    return;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int i,j;
    for(i=1; i<=a; i++){
        node[i]=i;
    }
    int c;
    for(i=1; i<=a; i++){
        for(j=1; j<=a; j++){
            scanf("%d",&c);
            if(c==1){
                if(find(i)!=find(j)){
                    merge(i,j);
                }
            }
        }
    }
    int d;
    int res=0;
    for(i=0; i<b; i++){
        scanf("%d",&d);
        if(i==0){
            res=find(d);
        }
        else{
            if(res!=find(d)){
                printf("NO");
                return 0;
            }
        }
    }
    printf("YES");
    return 0;
    
}