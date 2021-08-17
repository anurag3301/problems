// https://codeforces.com/problemset/problem/579/A
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
  int x; cin >> x;
  bitset<64> bit = x;
  cout<<bit.count() << endl;
}
