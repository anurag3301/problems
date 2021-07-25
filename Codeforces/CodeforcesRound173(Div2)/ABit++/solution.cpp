#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, x=0;
    cin >> n;
    string input;
    while(n--){
        cin >> input;
        x += (input[1]=='+') ? 1 : -1;
    }
    cout << x << endl;
}
