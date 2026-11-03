#include<cstdio>
#include<stack>
using namespace std;
stack <int> s;
int main(){
    int a,b;
    scanf("%d",&a);
    int i,j,k;
    int arr[200001]={};
    int brr[200001]={};
    int crr[200001]={};
    int cnt=0;
    for(i=0; i<a; i++){
        cnt=0;
        scanf("%d",&b);
        for(j=0; j<b; j++){
            scanf("%d",&arr[j]);
        }
        for(j=b-1; j>=0; j--){
            while(true){
                if(s.empty()){
                    brr[j]=-1;
                    s.push(arr[j]);
                    break;
                }
                else{
                    if(arr[j]<=s.top()){
                        s.pop();
                    }
                    else{
                        brr[j]=s.top();
                        break;
                    }
                }
            }
        }
        while(!s.empty()){
            s.pop();
        }
        for(k=0; k<b; k++){
            while(true){
                if(s.empty()){
                    crr[k]=-1;
                    s.push(arr[k]);                   
                    break;
                }
                else{
                    if(arr[k]>=s.top()){
                        s.pop();
                    }
                    else{
                        crr[k]=s.top();
                        break;
                    }
                }
            }          
        }
        while(!s.empty()){
            s.pop();
        }
        for(k=0; k<b; k++){
            if(brr[k]==-1 && crr[k]==-1){
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
}
// C번에 단조 스택? 쉽지 않아.