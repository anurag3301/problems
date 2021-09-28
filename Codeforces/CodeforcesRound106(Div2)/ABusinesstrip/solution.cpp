// https://codeforces.com/problemset/problem/149/A
#include<bits/stdc++.h>
using namespace std;

int main(){
  int k, x; cin >> k;
  vector<int> m;
  for(int i=0; i<12; i++){
    cin >> x;
    m.push_back(x);
  }
  sort(m.begin(), m.end(), greater<>());
  int c=0;
  for(int i:m){
    if(k<=0)break;
    k-=i;
    c++;
  }
  if(k>0)
    cout << -1 << endl;
  else
    cout << c << endl;
}
