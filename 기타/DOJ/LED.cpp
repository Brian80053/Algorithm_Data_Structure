#include<cstdio>
#include<algorithm>
using namespace std;
char f(int a,int b,int c,int t){
    if(a>t && b>t && c>t){
        return 'K';
    }
    if(a<=t && b>t && c>t){
        return 'R';
    }
    if(a>t && b<=t && c>t){
        return 'G';
    }
    if(a>t && b>t && c<=t){
        return 'B';
    }
    if(a<=t && b<=t && c>t){
        return 'Y';
    }
    if(a<=t && b>t && c<=t){
        return 'M';
    }
    if(a>t && b<=t && c<=t){
        return 'C';
    }
    if(a<=t && b<=t && c<=t){
        return 'W';
    }
}
int main(){
    int a;
    scanf("%d",&a);
    int i,j;
    int n,t,x,y;
    int p,q;
    char c;
    int arr[3]={2147483647,2147483647,2147483647};
    for(i=0; i<a; i++){
        scanf("%d %d %d %d",&n,&t,&x,&y);
        for(j=0; j<n; j++){
            scanf("%d %d %c",&p,&q,&c);
            if(c=='R' || c=='Y' || c=='M' || c=='W'){
                arr[0]=min(arr[0],max(abs(x-p),abs(y-q)));
            }
            if(c=='G' || c=='Y' || c=='C' || c=='W'){
                arr[1]=min(arr[1],max(abs(x-p),abs(y-q)));
            }
            if(c=='B' || c=='M' || c=='C' || c=='W'){
                arr[2]=min(arr[2],max(abs(x-p),abs(y-q)));
            }
        }
        printf("%c\n",f(arr[0],arr[1],arr[2],t));
        arr[0]=2147483647;
        arr[1]=2147483647;
        arr[2]=2147483647;
    }
}