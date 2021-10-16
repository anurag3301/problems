// https://www.hackerrank.com/challenges/maximum-draws/problem
#include<bits/stdc++.h>
using namespace std;

int maximumDraws(int n) {
  return n+1;

}

int main(){
  int t, n; cin >> t;
  while(t--){
    cin >> n;
    cout << maximumDraws(n) << endl;
  }

}
