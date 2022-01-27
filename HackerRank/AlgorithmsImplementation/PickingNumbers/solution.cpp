// https://www.hackerrank.com/challenges/picking-numbers/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x; cin >> n;
    map<int, int> m;
    while(n--){
        cin >> x;
        m[x]++;
    }
    int prev=0, max_ele=0, ele=0;
    for(auto x:m){
        max_ele = max(max_ele, x.second);
        if(abs(x.first-ele)<=1)
            max_ele = max(max_ele, prev + x.second);
        prev = x.second;
        ele = x.first;
    }
    cout << max_ele << endl;
}
