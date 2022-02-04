// https://www.hackerrank.com/challenges/cpp-maps/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int q, y, j; cin >> q;
    string x;
    map<string, int> m;
    while(q--){
        cin >> j;
        if(j==1){
            cin >> x >> y;
            m[x] += y;
        }
        else if(j==2){
            cin >> x;
            m.erase(x);
        }
        else{
            cin >> x;
            cout << m[x] << endl;
        }
    }
}
