//https://codeforces.com/problemset/problem/122/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  bool isluckey = true;
  vector<int> possible = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
  string s = to_string(n);
  for(auto x:s)if(!(x=='4' || x=='7'))isluckey = false;
  for(auto x:possible)if(n%x==0)isluckey = true;
  cout << ((isluckey)?"YES":"NO") << endl;
}
