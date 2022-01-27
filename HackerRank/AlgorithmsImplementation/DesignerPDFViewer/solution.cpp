// https://www.hackerrank.com/challenges/designer-pdf-viewer/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m=0, n=26;
    vector<int> al(n);
    for(int i=0; i<26; i++){
        cin >> al[i];
    }
    string s; cin >> s;
    for(char c:s){
        m = max(m, al[(int)c-97]);
    }

    cout << m*s.length() << endl;
}
