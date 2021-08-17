//https://codeforces.com/problemset/problem/32/B
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  string s; cin >> s;
  while(s.length() > 0){
    if(s[0] == '-' && s[1] == '-'){
      cout <<2;
      s.erase(0, 2);
      continue;
    }
    if(s[0] == '-' && s[1] == '.'){
      cout <<1;
      s.erase(0, 2);
      continue;
    }
      cout <<0;
      s.erase(0, 1);
  }
  cout << endl;
}
