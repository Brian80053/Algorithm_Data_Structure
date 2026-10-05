//골드1 계단수
#include<cstdio>
#define MOD 1000000000
int dp[101][10][1025]={};
int main(){
    int a,i,j,k,l,cnt=0;
    scanf("%d",&a);
    if(a < 10) {
        printf("0");
        return 0;
    }
    for(i=0; i<a; i++){
        for(j=0; j<=9; j++){
            if(i==0){
                dp[i][j][1<<j]=1;
                continue;
            }
            else{
                for(k=1; k<1024; k++){
                    if(j< 9){
                        dp[i][j][k | (1<<j)]+=dp[i-1][j+1][k];
                        dp[i][j][k | (1<<j)] %= MOD;
                    }
                    if(j> 0){
                        dp[i][j][k | (1<<j)]+=dp[i-1][j-1][k];
                        dp[i][j][k | (1<<j)] %= MOD;
                    }
                }
            }
        }
    }
    for(j=1; j<=9; j++){
        cnt+=dp[a-1][j][1023];
        cnt%=MOD;
    }
    printf("%d",cnt);
}