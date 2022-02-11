// https://codeforces.com/problemset/problem/272/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, n, t=0; cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        t+=x;
    }
    int count=0;
    for(int i=1; i<6; i++){
        if((t+i-1)%(n+1)!=0)count++;
    }
    cout << count << endl;
}
