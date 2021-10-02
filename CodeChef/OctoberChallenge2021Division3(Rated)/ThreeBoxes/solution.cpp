// https://www.codechef.com/OCT21C/problems/THREEBOX
#include<bits/stdc++.h>
using namespace std;

int main(){
  int box, a, b, c, n, d, x; cin >> n;
  while(n--){
    cin >> a >> b >> c >> d;
    if(a + b + c <= d)cout << 1 << endl;
    else if(a + b <= d)cout << 2 << endl;
    else cout << 3 << endl;

  }
}
