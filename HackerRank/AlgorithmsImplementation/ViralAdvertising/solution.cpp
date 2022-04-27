//https://www.hackerrank.com/challenges/strange-advertising/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int d; cin >> d;
    int p=5, sum=2;
    d--;
    while(d--){
        p = (p/2) * 3;
        sum += (p/2);
    }
    cout << sum << endl;
}
