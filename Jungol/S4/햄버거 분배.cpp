#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    char s[20001];
    scanf("%s",s);
    int i,j;
    int cnt=0;
    for(i=0; i<a; i++){
        if(s[i]=='P'){
            int x=max(0,i-b);
            int y=min(i+b,a-1);
            for(j=x; j<=y; j++){
                if(s[j]=='H'){
                    s[j]='X';
                    cnt++;
                    break;
                }
            }
        }
    }
    printf("%d",cnt);
}