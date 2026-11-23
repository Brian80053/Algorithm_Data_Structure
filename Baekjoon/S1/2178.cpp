#include<cstdio>
#include<queue>
#include<tuple>
using namespace std;
int visit[101][101]={};
int arr[101][101]={};
int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
queue <tuple<int,int,int>> q;
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int i,j;
    for(i=1; i<=a; i++){
        for(j=1; j<=b; j++){
            scanf("%1d",&arr[i][j]);
        }
    }
    int nx,ny;
    q.push({1,1,1});
    while(!q.empty()){
        auto [x,y,z]=q.front();
        q.pop();
        if(visit[x][y]==1){
            continue;
        }
        visit[x][y]=1;
        if(x==a && y==b){
            printf("%d",z);
            return 0;
        }
        for(i=0; i<4; i++){
            nx=x+dir[i][0];
            ny=y+dir[i][1];
            if(nx>0 && nx<=a && ny>0 && ny<=b){
                if(visit[nx][ny]==0 && arr[nx][ny]==1){
                    q.push({nx,ny,z+1});
                }
            }
        }
    }

}