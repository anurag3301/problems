//https://codeforces.com/problemset/problem/110/A

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
  string n;
  cin >> n;
  int ly=0;
  for(auto x:n){
    if(x == '4' || x == '7')ly ++;
  }
  cout << ((ly == 4 || ly == 7) ? "YES" :  "NO")<< endl;
}
