#include<cstdio>
#include<algorithm>
#include<queue>
#include<vector>
#include<iterator>
using namespace std;
priority_queue <int,vector<int>,greater<int>> pq1;
priority_queue <int,vector<int>,less<int>> pq2;
int main(){
    int a,b,i;
    scanf("%d",&a);
    for(i=0; i<a; i++){
        scanf("%d",&b);
        if(b!=0){
            if(b>0){
                pq1.push(b);
            }
            else{
                pq2.push(b);
            }
        }
        if(b==0){
            if(pq1.empty()==0 && pq2.empty()==0){
                if(abs(pq1.top())<abs(pq2.top())){
                    printf("%d\n",pq1.top());
                    pq1.pop();
                }
                else{
                    printf("%d\n",pq2.top());
                    pq2.pop();
                }
            }
            else if(pq1.empty()==1 && pq2.empty()==0){
                printf("%d\n",pq2.top());
                pq2.pop();                
            }
            else if(pq2.empty()==1 && pq1.empty()==0){
                printf("%d\n",pq1.top());
                pq1.pop();        
            }
            else{
                printf("0\n");
            }
        }
    }
}