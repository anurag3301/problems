// https://codeforces.com/problemset/problem/450/A 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int x, n, m; cin >> n >> m;
  list<int> stu;
  list<int> ind(n);
  iota(ind.begin(), ind.end(), 1);
  int l, t;
  while(n--){
    cin >> x;
    stu.push_back(x);
  }
  while(stu.size()){
    if(stu.front()<=m){
      l = ind.front();
      ind.pop_front();
      stu.pop_front();
    }
    else{
      t = ind.front();
      ind.pop_front();
      ind.push_back(t);
      t = stu.front();
      stu.pop_front();
      stu.push_back(t-m);
    }
  }
  cout << l << endl;
}
