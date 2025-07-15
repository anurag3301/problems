// https://codeforces.com/problemset/problem/1703/A

#include<bits/stdc++.h>
using namespace std;

#define println(n) cout << n << endl
#define print(n) cout << n


int main(){
    int n; cin >> n;
    string in;
    while(n--){
        cin >> in;
        transform(in.begin(), in.end(), in.begin(), [](char c){return tolower(c);});
        if(in == "yes")println("YES");
        else println("NO");
    }
}
