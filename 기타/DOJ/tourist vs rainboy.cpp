#include<cstdio>
#include<vector>
using namespace std;
int main(){
    int a;
    scanf("%d",&a);
    int i;
    vector <long long> arr;
    int j,k,l;
    for(i=0; i<a; i++){
        long long b,c;
        long long s1=0,s2=0;
        scanf("%lld",&b);
        for(j=0; j<b; j++){
            scanf("%lld",&c);
            arr.push_back(c);
        }
        for(k=0; k<b; k++){
            s1+=(k+1)*arr[k];
        }
        for(l=0; l<b; l++){
            s2+=(b-l)*arr[l];
        }
        printf("%lld\n",s1-s2);
        arr.clear();
    }
}