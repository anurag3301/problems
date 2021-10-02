// https://www.codechef.com/OCT21C/problems/ANDSUBAR
#include<bits/stdc++.h>
using namespace std;

int highestPowerof2(int n)
{   
  int p = (int)log2(n);
  return (int)pow(2, p);
}

int main(){
  int t, n; cin >> t;
  while(t--){
    cin >> n;
    if(n==1){
      cout << 1 << endl;
      continue;
    }
    int m = highestPowerof2(n);
    int l = m/2;
    int r = n-m+1;
    cout << max(l, r)<< endl;
  }
}
