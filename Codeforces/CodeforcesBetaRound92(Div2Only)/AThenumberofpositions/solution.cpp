// https://codeforces.com/problemset/problem/124/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, n, b, x; cin >> n >> a >> b;
    cout << min(n-a, b+1) << endl;
}
