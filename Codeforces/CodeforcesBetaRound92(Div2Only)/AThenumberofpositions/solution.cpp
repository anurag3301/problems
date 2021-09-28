// https://codeforces.com/problemset/problem/124/A
#include<bits/stdc++.h>
using namespace std;

int main(){
  int a, n, b, x; cin >> n >> a >> b;
  set<int> front;
  set<int> back;
  for(int i=a+1; i<=n; i++){
    front.insert(i);
  }
  for(int i=n; i>=n-b; i--){
    back.insert(i);
  }
  set<int> inter;
  set_intersection(front.begin(), front.end(), back.begin(), back.end(), inserter(inter, inter.begin()));
  cout << inter.size() << endl;
}
