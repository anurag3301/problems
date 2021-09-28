// https://codeforces.com/problemset/problem/214/A
#include<bits/stdc++.h>
using namespace std;

int main(){
  int p = 0, m, n; cin >> n >> m;
  for(int i=0; i<=n; i++){
    for(int j=0; j<=m; j++){
      if(j*j+i==n && j+i*i==m)p++;
    }
  }
  cout << p << endl;

}
