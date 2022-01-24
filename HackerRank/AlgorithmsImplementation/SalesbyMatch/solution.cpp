// https://www.hackerrank.com/challenges/sock-merchant/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x; cin >> n;
    unordered_map<int, int> socks;
    while(n--){
        cin >> x;
        socks[x]++;
    }
    int count=0;
    for(auto x: socks){
        count += x.second / 2;
    }
    cout << count << endl;
}
