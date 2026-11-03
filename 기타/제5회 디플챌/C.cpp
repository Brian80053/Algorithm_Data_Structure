#include<cstdio>
using namespace std;
int main(){
    int a;
    scanf("%d",&a);
    int arr[100005]={};
    int i;
    for(i=0; i<a; i++){
        scanf("%1d",&arr[i]);
    }
    int set=0;
    if(arr[0]==1){
        set++;
    }
    int cnt=0;
    for(i=1; i<a; i++){
        if(arr[i]==1 && arr[i+1]==0){
            printf("-1");
            return 0;
        }
        if(arr[i]==1 && arr[i+1]==1){
            cnt+=(i-set);
            set+=2;
            arr[i]=0;
            arr[i+1]=0;
        }
    }
    printf("%d",cnt);
}