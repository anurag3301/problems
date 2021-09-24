// https://codeforces.com/problemset/problem/469/A
#include<bits/stdc++.h>
using namespace std;

int main(){
  int x, n, y;
  cin >> x >> n;
  set<int> lev;
  while(n--){
    cin>>y;
    lev.insert(y);
  }
  cin >> n;
  while(n--){
    cin>>y;
    lev.insert(y);
  }
  if(lev.size() == x){
    cout << "I become the guy." << endl;
  }else{
    cout << "Oh, my keyboard!" << endl;

  }
}
