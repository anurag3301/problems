// https://codeforces.com/contest/1593/problem/0
#include<bits/stdc++.h>
using namespace std;

int get_vote(int c, int c1, int c2){
  int m = max(c, max(c1, c2));
  if(m == c && m!=c1 && m!=c2)return 0;
  else return max(c1, c2) - c + 1;
}

int main(){
  int n; cin >> n;
  int a, b, c;
  while(n--){
    cin >> a >> b >> c;
    cout << get_vote(a, b, c) << " " << get_vote(b, a, c) << " " << get_vote(c, b, a) << endl;
  }
}
