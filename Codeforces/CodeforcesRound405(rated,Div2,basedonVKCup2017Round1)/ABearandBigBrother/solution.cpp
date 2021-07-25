#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int years=0;
    while(true){
        a *= 3;
        b *= 2;
        years++;
        if(a>b){
            break;
        }
    }
    cout << years << endl;
}
