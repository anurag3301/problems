// https://codeforces.com/problemset/problem/144/A
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
  int n; cin >> n;
  int l=0, s=100, lp, sp, x;
  for(int i=1; i<=n; i++){
    cin >> x;
    if(l<x){
      l = x;
      lp = i;
    }
    if(s>=x){
      s = x;
      sp = i;
    }
    s = min(s ,x);
  }
  if(lp < sp){
    cout << ((lp-1) + (n-sp)) << endl;
  }
  else{
    cout << ((lp-1) + (n-sp-1)) << endl;
  }
}
