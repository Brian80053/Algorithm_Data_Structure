#include<cstdio>
using namespace std;
int main(){
    int a,b;
    scanf("%d",&a);
    int i,j,cnt;
    int c,d,e,f;
    for(i=0; i<a; i++){
        cnt=0;
        scanf("%d",&b);
        for(j=0; j<b; j++){
            scanf("%d %d %d %d",&c,&d,&e,&f);
            if((d<0 && f>0) || (d>0 && f<0)){
                cnt++;
            }
        }
        printf("%d ",cnt);
    }
}
// 무슨 이 딴 거지같은 문제가 있냐 문제 자체는 ㅈㄴ 쉬운 애드혹인데 갑자기 범위가 10^6이라서 제곱 씌우면 오버플로우가 나버림
// Python 친화 문제 ㄹㅇ