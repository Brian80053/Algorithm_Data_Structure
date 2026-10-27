#include<cstdio>
#include<queue>
#include<vector>
#include<map>
#include<utility>
using namespace std;
map <pair<int,int>,int> m;
queue <pair<int,int>> q;
vector <int> v[200001];
// 단방향인지 양방향인지 모르겠으니 일단 단방으로 짜보자
// 아.. 양방향이다..
using namespace std;
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[200001]={};
    int brr[200001]={};
    int visit[100001]={};
    int i;
    for(i=0; i<b; i++){
        scanf("%d %d",&arr[i],&brr[i]);
        v[arr[i]].push_back(brr[i]);
        v[brr[i]].push_back(arr[i]);
        m.insert({{arr[i],brr[i]},0});
    }
    q.push({0,1});
    int s=1;
    while(!q.empty()){
        auto [x,y] = q.front();
        q.pop();
        if(x!=0){
            if(m.count({x,y})==1){
                m[{x,y}]=s;
            }
            else{
                m[{y,x}]=s;
            }
            s++;
        }
        if(visit[y]==1){
            continue;
        }
        visit[y]=1;
        for(auto z:v[y]){
            if(visit[z]==0){
                q.push({y,z});
            }
        }
    }
    for(i=0; i<b; i++){
        if(m.count({arr[i],brr[i]})==1){
            printf("%d",m[{arr[i],brr[i]}]);
        }
        else{
            printf("%d",m[{brr[i],arr[i]}]);            
        }
    }
}