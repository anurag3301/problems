// https://codeforces.com/problemset/problem/205/A
#include<bits/stdc++.h>
using namespace std;

int main(){
  int x, n; cin >> n;
  int ls = 0, m = INT_MAX, index=0;
  vector<int> t;
  for(int i=1; i<=n; i++){
    cin >> x;
    m = min(m, x);
    t.push_back(x);
  }
  int occ = 0;
  for(int i=0; i<t.size(); i++){
    if(t[i] == m){
      index = i+1;
      occ ++;
    }
    if(occ == 2){
      cout << "Still Rozdil" << endl;
      return 0;
    }
  }
  cout << index << endl;

}
