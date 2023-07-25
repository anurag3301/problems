#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int idx, max_quality = INT_MIN;
        int a, b;
        for(int i=1; i<=n; i++){
            cin >> a >> b;
            if(a<=10 && b>max_quality){
                max_quality = b;
                idx = i;
            }
        }
        cout << idx << endl;
    }
}
