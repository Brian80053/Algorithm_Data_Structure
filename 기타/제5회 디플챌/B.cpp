#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    int b;
    cin >> b;
    cin >> a;
    int arr[27]={};
    for(int i=0; i<b; i++){
        arr[(int)a[i]-97]++;
    }
    int sum=0;
    for(int i=0; i<26; i++){
        sum+=arr[i]/2+arr[i]%2;
    }
    printf("%d",sum);
}