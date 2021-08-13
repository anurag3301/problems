// https://codeforces.com/problemset/problem/131/A
#include <cctype>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  string s; cin >> s;
  bool cap = true;
  
  for(char x:s)
    if(islower(x)){
      cap = false; 
      break;
    }
  
  if(cap){
    for(char x:s)
      cout <<(char) tolower(x);
    cout << endl;
    return 0;
  }
  cap = true;

  if(islower(s[0])){
    for(int i=1; i<s.length(); i++)
      if(islower(s[i])){
        cap = false;
      }
  }
  else cap = false;

  if(cap){
    for(char x:s)
      cout << (char)((islower(x)?toupper(x):tolower(x)));
    cout << endl; 
    return 0;
  }
  else cout << s << endl;
}
