#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    char c, p;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> c;
            p = ((i+j)%2==0)?'B':'W';
            cout << ((c=='-')?'-':p);
        }
        cout << endl;
    } 
}
