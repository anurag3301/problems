// https://codeforces.com/contest/1862/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
     int t; cin >> t;
     while(t--){
         int n, m; cin >> n >> m;
         vector<string> v(n);
         for(int i=0; i<n; i++){
            cin >> v[i];
         }
         int pos=0;
         string check = "vika";
         for(int i=0; i<m; i++){
             for(int j=0; j<n; j++){
                 if(v[j][i] == check[pos]){
                     pos++;
                     break;
                 }
             }
         }
         if(pos >= 4){
             cout << "YES" << endl;
         }
         else{
             cout << "NO" << endl;
         }
     }
}
