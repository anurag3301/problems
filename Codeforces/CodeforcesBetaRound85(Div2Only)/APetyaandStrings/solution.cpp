// https://codeforces.com/contest/112/problem/A
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    if(s1.compare(s2) == 0)cout << 0 << endl;
    else if(lexicographical_compare(s1.begin(), s1.end(), s2.begin(), s2.end())) cout << -1 << endl;
    else cout << 1 << endl;
}
