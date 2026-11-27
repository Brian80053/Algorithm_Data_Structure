#include<cstdio>
#include<algorithm>
using namespace std;
int arr[100001]={};
int sum[100001]={};
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int i;
    for(i=1; i<=a; i++){
        scanf("%d",&arr[i]);
        sum[i]=sum[i-1]+arr[i];
    }
    int l=1;
    int r=1;
    int ans=1000001;
    while(l<=a && r<=a){
        if(sum[r]-sum[l-1]>=b){
            ans=min(ans,r-l+1);
            l++;
        }
        if(sum[r]-sum[l-1]<b){
            r++;
        }
    }
    printf("%d",ans);
}