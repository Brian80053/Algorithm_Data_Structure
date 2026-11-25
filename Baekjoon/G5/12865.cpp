#include<cstdio>
#include<algorithm>
using namespace std;
int price[100002]={};
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int i,j;
    int c,d;
    for(i=1; i<=b; i++){
        price[i]=-1;
    }
    for(i=0; i<a; i++){
        scanf("%d %d",&c,&d);
        for(j=b; j>=0; j--){
            if(price[j]!=-1){
                if(j+c<=b){
                    price[j+c]=max(price[j+c],price[j]+d);
                }
                else{
                    continue;
                }
            }
        }
    }
    int ans=0;
    for(j=0; j<=b; j++){
        ans=max(ans,price[j]);
    }
    printf("%d",ans);
}