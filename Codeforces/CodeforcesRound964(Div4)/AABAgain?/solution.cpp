#include <bits/stdc++.h>
using namespace std;

int main(){
    int x; cin >> x;
    string in;
    while(x--){
        cin >> in;
        cout << (in[0]-'0' + in[1]-'0') << endl;
    }
}
