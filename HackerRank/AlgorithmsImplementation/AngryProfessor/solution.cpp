// https://www.hackerrank.com/challenges/angry-professor/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, x, k; cin >> t;
    while(t--){
        cin >> n >> k;
        while(n--){
            cin >> x;
            if(x<=0)k--;
        }
        if(k<=0)cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}
