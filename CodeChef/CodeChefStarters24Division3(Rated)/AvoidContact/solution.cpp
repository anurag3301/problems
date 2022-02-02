// https://www.codechef.com/START24C/problems/AVOIDCONTACT
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, x, y; cin >> t;
    while(t--){
        cin >> x >> y;
        int n = x-y;
        cout << n + y*2 - ((n==0)?1:0)<< endl;
    }
}
