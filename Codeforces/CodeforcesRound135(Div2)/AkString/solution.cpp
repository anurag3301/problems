// https://codeforces.com/problemset/problem/219/A
#include<bits/stdc++.h>
using namespace std;

int main(){
  int k, x; cin >> k;
  string s;
  cin >> s;
  map<char, int> m;
  for(char i:s){
    m[i]++;
  }
  for(auto &i:m){
    if(i.second % k == 0){
      i.second /= k;
    }
    else{
      cout << -1 << endl;
      return 0;
    }
  }
  string f = "";
  while(k--){
    for(auto i:m){
      for(int j=0; j<i.second; j++)f+=i.first;
    }
  }
  cout << f << endl;
}
