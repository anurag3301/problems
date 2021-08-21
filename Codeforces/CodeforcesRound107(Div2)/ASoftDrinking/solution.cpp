// https://codeforces.com/problemset/problem/151/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  int dt = (k * l)/nl;
  int lt = c * d;
  int st = p / np;
  cout << ((min(dt, min(lt, st)) / n)) << endl;
}
