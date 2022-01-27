// https://www.hackerrank.com/challenges/the-hurdle-race/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, m=0, x; cin >> n >> k;
    while(n--){
        cin >> x;
        m = max(m, x);
    }
    cout << max(0, m-k) << endl;

}
