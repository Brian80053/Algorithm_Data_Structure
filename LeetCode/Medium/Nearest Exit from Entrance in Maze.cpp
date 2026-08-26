class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int x=entrance[0],y=entrance[1];
        int size_r=maze.size();
        int size_c=maze[0].size();
        vector<vector<int>> map(size_r,vector<int>(size_c,0));
        int i,j;
        for(i=0; i<size_r; i++){
            for(j=0; j<size_c; j++){
                if(maze[i][j]=='.'){
                    map[i][j]=0;
                }
                if(maze[i][j]=='+'){
                    map[i][j]=1;
                }
            }
            printf("\n");
        }
        map[x][y]=9;
        vector<vector<int>> visit(size_r,vector<int>(size_c,0));
        queue <tuple<int,int,int>> search;
        search.push({x,y,0});
        int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
        int ft=0;
        while(!search.empty()){
            auto [n,m,k]=search.front();
            search.pop();
            if(visit[n][m]==1){
                continue;
            }
            visit[n][m]=1;
            if(ft==1 &&(n==0 || n==size_r-1 || m==0 || m==size_c-1)){
                return k;
            }
            for(i=0; i<4; i++){
                int nx=n+dir[i][0];
                int ny=m+dir[i][1];
                if(nx>=0 && nx<size_r && ny>=0 && ny<size_c){
                    if(map[nx][ny]==0){
                        search.push({nx,ny,k+1});
                    }
                }
            }
            ft=1;
        }
        return -1;
    }
};