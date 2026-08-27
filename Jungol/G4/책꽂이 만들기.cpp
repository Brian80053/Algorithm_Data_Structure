#include<cstdio>
#include<queue>
#include<vector>
#include<functional>
using namespace std;
priority_queue <long long,vector<long long>,greater <long long>> arr;
int main(){
    int a;
    scanf("%d",&a);
    int i;
    int b;
    for(i=0; i<a; i++){
        scanf("%d",&b);
        arr.push(b);
    }
    long long sum=0;
    while(arr.size()>1){
        auto x=arr.top();
        arr.pop();
        auto y=arr.top();
        arr.pop();
        sum+=x+y;
        arr.push(x+y);
    }
    printf("%lld",sum);
}