#include<cstdio>
using namespace std;
int main(){
    long long a,b;
    scanf("%lld",&a);
    int i;
    long long c,d;
    for(i=0; i<a; i++){
        scanf("%lld",&b);
        if(b%3==0){
            c=b/3;
            d=3;
        }
        else{
            c=b/3+1;
            d=b%3;   
        }
        d--;
        printf("%lld\n",c*(c+d));
    }
}