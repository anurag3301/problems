//https://codeforces.com/problemset/problem/248/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, l=0, r=0; cin >> n;
  int x;
  for(int i=0; i<n; i++){
    cin >> x;
    l += x;
    cin >> x;
    r += x;
  }
  int lc = l;
  int lo = n-l;
  int rc = r;
  int ro = n-r;
  cout <<(min(lc,lo) + min(rc, ro)) << endl;
}
