// https://codeforces.com/problemset/problem/228/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  set<int> s;
  int x;
  for(int i=0; i<4; i++){
    cin >> x;
    s.insert(x);
  }
  cout << (4-s.size())<< endl;
}
