#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
int main(){
    int a;
    scanf("%d ",&a);
    string s;
    int i,j;
    string res;
    for(i=0; i<a; i++){
        getline(cin, s);    
        res+=s[0];
        for(j=1; j<s.length(); j++){
            if(s[j]==' '){
                res+=s[j+1];
            }
        }
        cout << res << "\n";
        res.clear();
    }
}