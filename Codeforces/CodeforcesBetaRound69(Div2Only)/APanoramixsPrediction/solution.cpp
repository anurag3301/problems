// https://codeforces.com/problemset/problem/80/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, nxtpri=0; cin >> n >> m;
    n++;
    while(!nxtpri){
        bool isprime = true;
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0){
                isprime = false;
                break;
            }
        }
        if(isprime){
            nxtpri = n;
        }
        n++;
    }
    cout << ((nxtpri==m)?"YES":"NO") << endl;

}
