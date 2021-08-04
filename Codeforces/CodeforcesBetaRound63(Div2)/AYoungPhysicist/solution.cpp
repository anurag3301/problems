// https://codeforces.com/problemset/problem/69/A

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
  int n; cin >> n;
  int x, y, z, xs=0, ys=0, zs=0;
  while(n--){
    cin >> x >> y >> z;
    xs += x; ys += y, zs += z;
  }
  if(xs || ys || zs) cout << "NO" << endl;
  else cout << "YES" << endl;
}
