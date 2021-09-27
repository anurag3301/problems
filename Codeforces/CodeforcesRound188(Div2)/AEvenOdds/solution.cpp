// https://codeforces.com/problemset/problem/318/A
#include<bits/stdc++.h>
using namespace std;

int main(){
  long long k, n;
  cin >> k >> n;
  if(k%2==0){
    if(n<=k/2){
      cout << (n*2)-1<<endl;
    }
    else{
      cout << (n-k/2)*2 << endl;
    }
  }
  else{
    if(n<=k/2+1){
      cout << (n*2)-1<<endl;
    }
    else{
      cout << ((n-k/2)-1)*2 << endl;
    }
  }
}
