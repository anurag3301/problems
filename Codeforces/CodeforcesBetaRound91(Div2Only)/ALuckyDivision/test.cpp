#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

  for(int i=1; i<=1000; i++){
    bool isluckey = true;
    string s = to_string(i);
    for(auto x:s){if(!(x=='4' || x=='7')){isluckey = false;break;}}
    if(isluckey)cout << i << ", "; 
  }
  cout << endl;
}
