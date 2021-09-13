// https://codeforces.com/problemset/problem/165/A
#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include <utility>
using namespace std;

/*
*/
int main(){
  int x, y, n; cin >>n;
  vector<pair<int, int>> p;
  while(n--){
    cin >> x >> y;
    p.push_back({x, y});
  }
  int count = 0;
  int u=0, b=0, r=0, l=0;
  for(auto i:p){
    for(auto j:p){
      if(i.first == j.first && i.second > j.second)b = 1;
      if(i.first == j.first && i.second < j.second)u = 1;
      if(i.first > j.first && i.second == j.second)l = 1;
      if(i.first < j.first && i.second == j.second)r = 1;
      if(u && b && r && l){
        cout << i.first << " " << i.second << endl;
        count++;
        u=0; b=0; r=0; l=0;
        break;
      }
    }
  }
  cout << count << endl;
}
