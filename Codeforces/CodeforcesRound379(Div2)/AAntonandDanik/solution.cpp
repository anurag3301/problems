// https://codeforces.com/problemset/problem/734/A
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  string report;
  cin >> n;
  cin >> report;
  int a=0, d=0;
  for(auto x:report){
    if (x == 'A') a++;
    else d++;
  }
  cout << ((a > d)? "Anton":(a == d)? "Friendship" : "Danik") << endl;
}
