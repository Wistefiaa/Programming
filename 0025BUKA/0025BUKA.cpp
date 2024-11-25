#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int a,b,c;
    char s;
    cin>>a>>s>>b;
    if(s=='+'){
        c = a+b;
    }
    else{
        c = a*b;
    }
    cout<<c;
}