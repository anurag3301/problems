// https://codeforces.com/problemset/problem/467/A
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
  int n; cin >> n;
  int count = 0;
  int p, q;
  while(n--){
    cin >> p >> q;
    if((q-p)>=2)count++;
  }
  cout << count << endl;
}
