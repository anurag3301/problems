// https://codeforces.com/contest/1561/problem/0
#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

void pr(vector<int> v){
  cout << "[";
  for(int x:v)cout<<x<<", ";
  cout << "]"<<endl;
}

int main(){
  int t; cin >> t;
  int n, x, it=0;
  while(t--){
    cin >> n;
    vector<int> ar;
    for(int i=0; i<n; i++){
      cin >> x;
      ar.push_back(x);
    }
    bool iseven=false;
    bool isorted=false;
    it = 0;
    while(!isorted){
      if(iseven){
        isorted = is_sorted(ar.begin(), ar.end());
        if(isorted)continue;
        for(int i=1; i<n-1; i+=2){
          if(ar[i]>ar[i+1])swap(ar[i], ar[i+1]);
        }
        iseven = false;
      }
      else{
        isorted = is_sorted(ar.begin(), ar.end());
        if(isorted)continue;
        for(int i=0; i<n-2; i+=2){
          if(ar[i]>ar[i+1])swap(ar[i], ar[i+1]);
        }
        iseven = true;
      }
      it++;
    }
    cout << it << endl;
  }
}
