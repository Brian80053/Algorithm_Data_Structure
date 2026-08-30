#include<cstdio>
#include<vector>
using namespace std;
int main(){
    int a;
    scanf("%d",&a);
    int i;
    int n;
    int j,k;
    int m;
    int ans=0;
    vector <int> arr;
    for(i=0; i<a; i++){
        scanf("%d ",&n);
        for(j=0; j<n; j++){
            scanf("%d",&m);
            arr.push_back(m);
        }
        ans=1;
        for(k=1; k<n; k++){
            if(arr[k]<arr[0]){
                ans++;
            }
            else{
                break;
            }
        }
        printf("%d\n",ans);
        arr.clear();
    }
}