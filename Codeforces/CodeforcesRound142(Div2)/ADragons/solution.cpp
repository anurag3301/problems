// https://codeforces.com/problemset/problem/230/A
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool sortcol( const vector<int>& v1,
               const vector<int>& v2 ) {
 return v1[0] < v2[0];
}

int main(){
  int s, n, x, y;
  cin >> s >> n;
  vector<vector<int>> data;
  while(n--){
    cin >> x >> y;
    vector<int>t = {x, y};
    data.push_back(t);
  }
  sort(data.begin(), data.end(),sortcol);
  for(auto x:data){
    if(x[0]<s){
      s += x[1];
    }
    else{
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES"<< endl;

}
