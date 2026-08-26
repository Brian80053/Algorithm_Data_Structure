//외판원 순회 골드1
#include<cstdio>
#include<algorithm>
#define INF 1234567890
using namespace std;
int road[20][20]={};
int n;
int dp[20][1<<16]={};
int travel(int city,int visit){
    if(visit ==(1<<n)-1){
        if(road[city][0]!=0){
            return road[city][0];
        }
        else{
            return INF;
        }
    }
    if(dp[city][visit]!=-1){
        return dp[city][visit];
    }
    int i;
    dp[city][visit]=INF;
    for(int i=0; i<n; i++){
        int check= 1<<i;
        if(road[city][i]!=0){
            if((visit & check)!=0){
                continue;
            }
            else{
                dp[city][visit]=min(dp[city][visit],road[city][i]+travel(i,visit|check));
            }
        }
    }
    return dp[city][visit];
}
int main(){
    int i,j;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d",&road[i][j]);
        }
        fill(dp[i],dp[i]+(1<<n),-1);
    }
    int dummy=travel(0,1);
    printf("%d",dummy);
    return 0;
}