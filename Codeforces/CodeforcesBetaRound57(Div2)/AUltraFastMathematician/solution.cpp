//https://codeforces.com/problemset/problem/61/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  string a, b; cin >> a >> b;
  bitset<100> abin(a);
  bitset<100> bbin(b);
  bitset<100> res = abin ^ bbin;
  if(a.length() != 100){
    string st = (res.to_string()).substr(100-a.length(), 99);
    cout << st << endl;
  }
  else cout << res << endl;
}
