// https://codeforces.com/problemset/problem/118/B
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  for(int j=n, k=0; j>=0 && k<=n; j--, k++){
    for(int i=0; i<j*2+(j%2==0 ? 0 : 0); i++)
      if(j!=0)cout << " ";
    for(int l=0; l<=k; l++){
      cout << l;
      if(j!=n)cout << " ";
    }
    for(int l=k-1; l>=0; l--){
      cout << l;
      if(l>0)cout << " ";
    }
    cout << endl;
  }

  for(int j=1, k=n-1; j<=n && k>=0; j++, k--){
    for(int i=0; i<j*2+(j%2==0 ? 0 : 0); i++)
      if(j!=0)
        cout << " ";
    for(int l=0; l<=k; l++){
      cout << l;
      if(j<n)cout << " ";
    }
    for(int l=k-1; l>=0; l--){
      cout << l;
      if(l>0)cout << " ";
    }
    cout << endl;
  }
}
