// https://codeforces.com/problemset/problem/271/A
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
  set<int> s1;
  int y;
  cin >> y;
  y++;
  while(true){
    s1.insert(y % 10);
    s1.insert((y % 100) / 10);
    s1.insert((y % 1000) / 100);
    s1.insert((y % 10000) / 1000);
    if(s1.size() == 4){
      cout << y << endl;
      break;
    }
    y++;
    s1.clear();
  }
}
