#include<cstdio>
#include<algorithm>
#include<utility>
using namespace std;
pair <int,int> arr[100001]={};
bool compare(pair <int,int> a,pair <int,int> b){
    if(a.second==b.second){
        return a.first<b.first;
    }
    return a.second<b.second;
}
int main(){
    int a;
    scanf("%d",&a);
    int i;
    for(i=0; i<a; i++){
        scanf("%d %d",&arr[i].first,&arr[i].second);
    }
    sort(arr,arr+a,compare);
    int n=0;
    int cnt=0;
    for(i=0; i<a; i++){
        if(n<=arr[i].first){
            cnt++;
            n=arr[i].second;
        }
    }
    printf("%d",cnt);
}