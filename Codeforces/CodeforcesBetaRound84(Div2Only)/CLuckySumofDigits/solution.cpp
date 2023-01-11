// https://codeforces.com/contest/110/problem/C
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    int n; cin >> n;
    int num7 = n/7;
    int left = n%7;
    int num4 = left/4;
    left = left%4;
    if(left > num7){
        cout << -1 << endl;
        return 0;
    }
    num7 -= left;
    left += (left*7);
    num4 += left/4;

    string result = "";
    for(int i=0; i<num4; i++){
        result += '4';
    }
    for(int i=0; i<num7; i++){
        result += '7';
    }

    cout << result << endl;
}
