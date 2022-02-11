// https://codeforces.com/problemset/problem/224/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int x = sqrt(a*b/c), y=sqrt(b*c/a), z=sqrt(a*c/b);
    cout << 4*(x+y+z) << endl;
}
