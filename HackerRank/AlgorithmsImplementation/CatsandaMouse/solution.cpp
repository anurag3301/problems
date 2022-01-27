// https://www.hackerrank.com/challenges/cats-and-a-mouse/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, c;
    cin >> n;
    while(n--){
        cin >> a >> b >> c;
        if(abs(a-c)<abs(b-c))
            cout << "Cat A" << endl;
        else if(abs(a-c)>abs(b-c))
            cout << "Cat B" << endl;
        else
            cout << "Mouse C" << endl;
    }
}
