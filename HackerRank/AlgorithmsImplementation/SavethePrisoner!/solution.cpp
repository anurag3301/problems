// https://www.hackerrank.com/challenges/save-the-prisoner/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, m, s; cin >> t;
    while(t--){
        cin >> n >> m >> s;
        cout << 1 + (s - 1 + m - 1) % n << endl;
    }
}
