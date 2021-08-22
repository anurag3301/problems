// https://codeforces.com/problemset/problem/227/B
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int x, n, m; cin >> n;
  vector<int>arr(n+1);
  for(int i=1; i<=n; i++){
    cin >> x;
    arr[x] = i;
  }
  long long v=0, p=0;
  cin >> m;
  while(m--){
    cin >> x;
    v += arr[x];
    p += n - arr[x] + 1;
  }
  cout << v << " " << p << endl;


}
