// https://www.hackerrank.com/challenges/electronics-shop/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int b, n, m, x, mp=0;
    cin >> b >> n>> m;
    vector<int> key(n);
    vector<int> dri(m);
    for(int i=0; i<n; i++){
        cin >> key[i];
    }
    for(int i=0; i<m; i++){
        cin >> dri[i];
    }
    for(int i:key){
        for(int j:dri){
            if(i+j <= b){
                mp = max(i+j, mp);
            }
        }
    }
    if(mp)
        cout << mp << endl;
    else
        cout << -1 << endl;
}
