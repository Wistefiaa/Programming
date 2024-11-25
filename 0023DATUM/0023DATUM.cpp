#include<bits/stdc++.h>
using namespace std;
int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
string day[7]={"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};
int main(){
    int d;
    int m,sm=1;
    int sumd=0;
    cin>>d>>m;
    if(sm-m==0){
        cout<<day[d%7-1];
    }
    else{
        for(int i=0; i<m-sm; i++){
            sumd +=month[i];
        }
        cout<<day[((sumd+d)%7)-1];
    }
    return 0;
}