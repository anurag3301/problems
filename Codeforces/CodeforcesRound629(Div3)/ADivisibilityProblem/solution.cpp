// https://codeforces.com/problemset/problem/1328/A
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, a, b, ad;
  cin >> n;
  while(n--){
    cin >> a >> b;
    if(a%b==0){
      cout << 0 << endl;
      continue;
    }
    ad = (b - (a%b)); 
    cout << ad << endl;
  }
}
