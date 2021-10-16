// https://www.hackerrank.com/challenges/handshake/problem
#include<bits/stdc++.h>
using namespace std;

int handshake(int n) {
  return (n*(n-1))/2;

}

int main(){
  int n, t; cin >> t;
  while(t--){
    cin >> n;
    cout << handshake(n) << endl;
  }

}
