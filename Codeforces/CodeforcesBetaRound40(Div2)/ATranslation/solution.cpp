// https://codeforces.com/problemset/problem/41/A
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
  string ber, bir;
  cin >> ber >> bir;
  bool iscorrect = true;
  for(int i=0; i<ber.length(); i++){
    if(ber[i] != bir[bir.length()-(i+1)]){
      iscorrect = false;
      break;
    }
  }
  cout << (iscorrect ? "YES" : "NO") << endl;
}
