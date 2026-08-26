#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    long long price[100001]={};
    long long count[100001]={};
    int i;
    for(i=1; i<=a; i++){
        scanf("%lld %lld",&price[i],&count[i]);
    }
    for(i=2; i<=a; i++){
        price[i]=min(price[i-1]+b,price[i]);
    }
    long long cnt=0;
    for(i=1; i<=a; i++){
        cnt+=price[i]*count[i];
    }
    printf("%lld",cnt);
}