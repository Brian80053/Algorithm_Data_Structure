#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    int b;
    cin >> b;
    cin >> a;
    for(int i=0; i<b; i++){
        if(a[i]=='0' && a[i+1]=='1'){
            cout << "@";
            i+=1;
        }
        else{
            cout << a[i];         
        }
    }
}