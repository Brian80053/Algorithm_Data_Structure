#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
bool compare(int a,int b){
    return a>b;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int i;
    int arr[1000001]={};
    int brr[1000001]={};
    for(i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+a,compare);
    for(i=0; i<(int)ceil((double)a/2); i++){
        brr[i*2]=arr[i];
    }
    int c=(int)ceil((double)a/2);
    for(i=a-1; i>=0; i--){
        if(brr[i]==0){
            brr[i]=arr[c];
            c++;
        }
    }
    int d;
    long long sum=0;
    for(i=0; i<a; i++){
        d=b;
        if(i>0 && brr[i]<brr[i-1]){
            d--;
        }
        if(i<a-1 && brr[i]<brr[i+1]){
            d--;
        }
        if(d<0){
            d=0;
        }
        sum+=(long long)d*brr[i];
    }
    printf("%lld",sum);
}