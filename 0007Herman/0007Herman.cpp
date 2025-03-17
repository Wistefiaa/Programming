#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  double t;
  double e;
  int r;
  cin>>r;
  t = 2*r*r;
  e = M_PI*r*r;
  cout<<fixed<<setprecision(6)<<e<<endl<<t;
}