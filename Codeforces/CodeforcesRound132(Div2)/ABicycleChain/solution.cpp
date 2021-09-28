// https://codeforces.com/problemset/problem/215/A
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, m, x;
  vector<int> p, r;
  cin >> n;
  while(n--){
    cin >> x;
    p.push_back(x);
  }
  cin >> m;
  while(m--){
    cin >> x;
    r.push_back(x);
  }
  m = 0;
  map<int, int> ratio;
  for(int i:r){
    for(int j:p){
      if(i%j==0){
        ratio[i/j]++;
        m = max(i/j, m);
      }
    }
  }
  cout << ratio[m] << endl;

}
