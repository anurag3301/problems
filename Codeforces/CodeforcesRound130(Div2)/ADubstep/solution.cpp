// https://codeforces.com/problemset/problem/208/A
#include<bits/stdc++.h>
using namespace std;

std::string rtrim(const std::string &s)
{
    size_t end = s.find_last_not_of(" ");
    return (end == std::string::npos) ? "" : s.substr(0, end + 1);
}

int main(){
  string s; cin >> s;
  char c1, c2, c3;
  string f = "";
  for(int i=0; i<s.length(); i++){
    c1 = s[i];
    if(i<s.length()-1) c2 = s[i+1];
    else c2 = '0';
    if(i<s.length()-2) c3 = s[i+2];
    else c3 = '0';
    
    if(c1 == 'W' && c2 == 'U' && c3 == 'B'){
      i+=2;
      if(f.length()!=0){
        if(f[f.length()-1] != ' ')
        f += " ";
      }
      continue;
    }
    f+=c1;
  }
  cout << rtrim(f) << endl;
}
