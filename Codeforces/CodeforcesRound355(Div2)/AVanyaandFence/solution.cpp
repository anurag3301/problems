// https://codeforces.com/problemset/problem/677/A
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
  int n, h;
  cin >> n >> h;
  int w=0;
  int x;
  while(n--){
    cin >> x;
    if(x > h)w += 2;
    else w ++;
  }
  cout << w << endl;
}
