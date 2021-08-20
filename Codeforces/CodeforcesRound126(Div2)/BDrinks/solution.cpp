// https://codeforces.com/problemset/problem/200/B
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
  int n, x; cin >> n;
  double f=0;
  for(int i=0; i<n; i++){
    cin >> x;
    f += (double)x/100;
  }
  cout <<fixed << setprecision(12)<< ((f/n)*100) << endl;
}
