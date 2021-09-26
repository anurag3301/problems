// https://codeforces.com/problemset/problem/139/A
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, x; cin >> n;
  vector<int> week;

  for(int i=0; i<7; i++){
    cin >> x;
    week.push_back(x);
  }
  // n = n % accumulate(week.begin(), week.end(), 0);
  // for(int i=0; i<7; i++){
  //   n-=week[i];
  //   if(n<=0){
  //     cout << i+1<< endl;
  //     break;
  //   }
  // }
  while(1){
    x = 1;
    for(int i:week){
      n-=i;
      if(n<=0){
        cout << x << endl;
        return 0;
      }
      x++;
    }
  }

}
