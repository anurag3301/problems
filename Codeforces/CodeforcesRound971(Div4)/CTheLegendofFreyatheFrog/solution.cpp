#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int x, y, k;
        cin >> x >> y >> k;
        int turnx = x/k + ((x%k!=0)?1:0);
        int turny = y/k + ((y%k!=0)?1:0);
        if(turnx > turny)
            cout << turnx+turny+abs(turnx-turny)-1 << endl;
        else
            cout << turnx+turny+abs(turnx-turny) << endl;
    }
}
