// https://codeforces.com/problemset/problem/133/A
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
  string s; cin >> s;
  if (s.find('H') != string::npos || s.find('9') != string::npos || s.find('Q') != string::npos)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
