// https://codeforces.com/problemset/problem/1/A
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
  long long int m, n, a;
  cin >> m >> n >> a;
  long long int nt = n/a;
  long long int mt = m/a;
  long long int count = nt * mt;
  if(m%a != 0) count += nt;
  if(n%a != 0) count += mt;
  if(m%a != 0 && n%a != 0) count += 1;
  cout << count << endl;
}
