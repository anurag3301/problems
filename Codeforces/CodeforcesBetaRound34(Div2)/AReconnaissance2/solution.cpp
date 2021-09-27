// https://codeforces.com/problemset/problem/34/A
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, x; cin >> n;
  vector<int> h;
  while(n--){
    cin >> x;
    h.push_back(x);
  }
  int m = abs(h[0]- h[h.size()-1]);
  
  vector<pair<int, pair<int, int>>> d;
  
  d.push_back({m, {h.size(), 1}});
  
  for(int i=0; i<h.size()-1; i++){
    x = abs(h[i]- h[i+1]);
    m = min(m, x);
    d.push_back({x, {i+1, i+2}});
  }

  for(auto i:d){
    if(i.first == m){
      cout << i.second.first << " " << i.second.second << endl;
      break;
    }
  }
}
