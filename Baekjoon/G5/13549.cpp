#include<cstdio>
#include<queue>
#include<utility>
using namespace std;
priority_queue <pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
int visit[200001]={};
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    q.push({0,a});
    while(!q.empty()){
        auto [x,y]=q.top();
        q.pop();
        if(visit[y]==1){
            continue;
        }
        visit[y]=1;
        if(y==b){
            printf("%d",x);
            break;
        }
        if(y<=b){
            q.push({x+1,y+1});
        }
        if(y>0){
            q.push({x+1,y-1});
        }
        if(y<=b){
            q.push({x,y*2});
        }
    }
}