#include<cstdio>
using namespace std;
int main(){
    int a;
    scanf("%d",&a);
    int n,i;
    for(i=0; i<a; i++){
        scanf("%d",&n);
        printf("%d\n",(n-1)*100+49);
    }
}