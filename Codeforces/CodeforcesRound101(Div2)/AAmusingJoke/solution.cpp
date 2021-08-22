// https://codeforces.com/problemset/problem/141/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  map<char, int>n;
  map<char, int>l;
  string a, b, c;
  cin >> a >> b >> c;
  for(char x:a){
    if(n[x]){
      n[x]++;
    }
    else{
      n[x] = 1;
    }
  }
  for(char x:b){
    if(n[x]){
      n[x]++;
    }
    else{
      n[x] = 1;
    }
  }
  for(char x:c){
    if(l[x]){
      l[x]++;
    }
    else{
      l[x] = 1;
    }
  }
  cout << (n == l? "YES":"NO") << endl;
}
