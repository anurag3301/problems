// https://codeforces.com/problemset/problem/443/A
#include<bits/stdc++.h>
#include <cctype>
using namespace std;

int main(){
  string s;
  getline(cin, s);
  set<char> ct;
  for(char x:s){
    if(isalpha(x)){
      ct.insert(x);
    }
  }
  cout << ct.size()<< endl;
}
