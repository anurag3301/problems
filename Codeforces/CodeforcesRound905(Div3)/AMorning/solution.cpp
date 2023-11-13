// https://codeforces.com/contest/1883/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>> n;
    for(int i=0; i<n; i++){
        string num;
        cin >> num;
        for(int i=0; i<4; i++){
            if(num[i] == '0')
                num[i] += 10;
        }
        int count = num[0] - 1 - '0';
        for(int i=1; i<4; i++){
            count += abs(num[i] - num[i-1]);
        }
        count += 4;
        cout << count << endl;
    }
}

