// https://www.codechef.com/START24C/problems/EVMHACK
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, a, b, c, p, q, r; cin >> t;
    while(t--){
        cin >> a >> b >> c >> p >> q >> r;
        int tv = p + q + r;
        int gv = a + b + c;
        int m = max(p-a, max(q-b, r-c));
        if(gv+m > tv/2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
}
