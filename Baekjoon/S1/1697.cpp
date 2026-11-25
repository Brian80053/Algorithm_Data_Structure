#include<cstdio>
#include<queue>
#include<utility>
using namespace std;
queue <pair<int,int>> q;
int visit[400001]={};
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    q.push({a,0});
    while(!q.empty()){
        auto [x,y]=q.front();
        q.pop();
        if(visit[x]==1){
            continue;
        }
        visit[x]=1;
        if(x==b){
            printf("%d",y);
            break;
        }
        if(x<=b){
            q.push({x+1,y+1});
        }
        if(x>0){
            q.push({x-1,y+1});
        }
        if(x<=200000){
            q.push({x*2,y+1});
        }
    }
}