#include<cstdio>
#include<queue>
#include<functional>
using namespace std;
priority_queue <int,vector <int>, less<int>> brr;
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[500001]={};
    vector <int> crr (a+1);
    int i,j;
    for(i=1; i<=a; i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int n=1;
    for(i=1; i<=a; i++){
        brr.push(arr[i]);
        if(arr[i]<crr[n-1] && sum>=b){
            printf("%d ",n);
            continue;
        }
        sum=0;
        crr.clear();
        n=0;
        while(!brr.empty()){
            if(sum>=b){
                printf("%d ",n);
                break;
            }
            crr.push_back(brr.top());
            sum+=brr.top();
            brr.pop();
            n++;
        }
        if(sum<b){
            printf("-1 ");
        }
        else if(brr.empty()==1 && sum>=b){
            printf("%d ",n);
        }
        for(auto x:crr){
            brr.push(x);
        }
    }
}