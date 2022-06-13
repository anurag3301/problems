#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, l, x; cin >> t;
    while(t--){
        cin >> n >> l >> x;
        cout << (min(l, n-l)*x) << endl;
    }
}
