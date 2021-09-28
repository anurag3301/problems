// https://codeforces.com/problemset/problem/34/B
#include<bits/stdc++.h>
using namespace std;

int main(){
  int m, n, x; cin >> n >> m;
  multiset<int> p;
  while(n--){
    cin >> x;
    p.insert(x);
  }
  int f=0;
  for(int i:p){
    if(!m || i>=0)break;
    f+=i;
    m--;
  }
  cout << -f << endl;
}
