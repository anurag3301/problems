// https://codeforces.com/problemset/problem/320/A
#include<bits/stdc++.h>
using namespace std;

int main(){
  string s; cin >> s;
  bool ismagic = true;
  char c1, c2, c3;

  for(int i=0; i<s.length(); i++){
    c1 = s[i];
    if(i<s.length()-1) c2 = s[i+1];
    else c2 = '0';
    if(i<s.length()-2) c3 = s[i+2];
    else c3 = '0';
    if(c1 == '1' && c2 == '4' && c3 == '4'){
      i+=2;
      continue;
    }
    if(c1 == '1' && c2 == '4'){
      i++;
      continue;
    }
    if(c1 == '1'){
      continue;
    }
    cout << "NO" << endl;
    return 0;
  
  }
  cout << "YES" << endl;

}
