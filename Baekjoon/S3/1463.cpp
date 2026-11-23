#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    int a;
    scanf("%d",&a);
    int dp[3000001]={};
    dp[1]=1;
    int i;
    for(i=1; i<=a; i++){
        dp[i]=INT_MAX;
    }
    for(i=1; i<=a; i++){
        dp[i+1]=min(dp[i+1],dp[i]+1);
        dp[i*2]=min(dp[i]+1,dp[i*2]);
        dp[i*3]=min(dp[i]+1,dp[i*3]);
    }
    printf("%d",dp[a]);
}