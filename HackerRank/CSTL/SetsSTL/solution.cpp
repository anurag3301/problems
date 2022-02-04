// https://www.hackerrank.com/challenges/cpp-sets/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int q, x, i; cin >> q;
    set<int> s;
    while(q--){
        cin >> i >> x;
        if(i==1){
            s.insert(x);
        }
        else if(i==2){
            s.erase(x);
        }
        else{
            if(s.find(x) != s.end())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}
