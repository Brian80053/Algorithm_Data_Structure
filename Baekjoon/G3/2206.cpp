#include<cstdio>
#include<queue>
#include<tuple>
using namespace std;
queue <tuple<int,int,int,int>> q;
int visit[1001][1001][2]={};
int arr[1001][1001]={};
int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
int main(){
    int a,b,i,j;
    scanf("%d %d",&a,&b);
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            scanf("%1d",&arr[i][j]);
        }
    }
    q.push({0,0,1,1});
    int nx=0,ny=0;
    while(!q.empty()){
        auto [x,y,z,c] = q.front();
        q.pop();
        if(visit[x][y][c]==1){
            continue;
        }
        if(x==a-1 && y==b-1){
            printf("%d",z);
            return 0;
        }
        visit[x][y][c]=1;
        for(i=0; i<4; i++){
            nx=x+dir[i][0];
            ny=y+dir[i][1];
            if(nx>=0 && nx<a && ny>=0 && ny<b){
                if(visit[nx][ny][c]==0){
                    if(arr[nx][ny]==0){
                        q.push({nx,ny,z+1,c});
                    }
                    if(arr[nx][ny]==1 && c==1){
                        q.push({nx,ny,z+1,0});
                    }
                }
            }
        }
    }
    printf("-1");
    return 0;
}
