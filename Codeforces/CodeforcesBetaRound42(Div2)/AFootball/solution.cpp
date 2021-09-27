// https://codeforces.com/problemset/problem/43/A
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >>n;
  string s;
  map<string, int> score;
  while(n--){
    cin >> s;
    score[s]++;
  }
  int m = 0;
  for(auto i:score)m = max(m, i.second);
  for(auto i:score)if(i.second == m) cout << i.first << endl;
}
