#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
queue <int> q;
vector <int> arr[1001]; 
int visit[1001];
int main(){
    int a,d;
    scanf("%d %d",&a,&d);
    int b,c,i;
    for(i=0; i<d; i++){
        scanf("%d %d",&b,&c);
        arr[b].push_back(c);
        arr[c].push_back(b);
    }
    int s=1;
    for(i=1; i<=a; i++){
        if(visit[i]==0){
            q.push(i);
            while(!q.empty()){
                auto x=q.front();
                q.pop();
                if(visit[x]!=0){
                    continue;
                }
                visit[x]=s;
                for(auto y:arr[x]){
                    if(visit[y]==0){
                        q.push(y);
                    }
                }
            }
            s++;
        }
    }
    printf("%d",s-1);
}