#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h,w,m;
    cin>>n;
    h = n;
    m = n/2;
    if(n%2==0){
        w = n-1;
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                if(i+j==m-1||j-i==m-1||i-j==m||i+j==n+n/2-2) cout<<'*';
                else cout<<'-';
            }
            cout<<'\n';
        }
    }
    else{
        w = n;
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                if(i+j==m||j-i==m||i-j==m||i+j==n+n/2-1) cout<<'*';
                else cout<<'-';
            }
            cout<<'\n';
        }
    }
}