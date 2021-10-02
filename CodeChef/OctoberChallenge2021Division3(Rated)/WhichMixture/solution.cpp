// https://www.codechef.com/OCT21C/problems/MIXTURE
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, a, b, x; cin >> n;
  while(n--){
    cin >> a >> b;
    if(!b)cout << "Solid" << endl;
    else if(!a)cout << "Liquid" << endl;
    else cout << "Solution" << endl;
  }
}
