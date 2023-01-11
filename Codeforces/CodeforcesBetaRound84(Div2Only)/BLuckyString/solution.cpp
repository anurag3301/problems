// https://codeforces.com/contest/110/problem/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    char *str = new char[n+1];
    str[n] = '\0';
    for(int i=0; i<n; i++){
        str[i] = '.';
    }

    for(int i=0; i<=4; i++){
        if(str[i]!='.')continue;
        for(int j=i; j<n; j+=4){
            str[j] = 97+i;
        }
    } 
    
    int oth = 'd';

    for(int i=0; i<n; i++){
        if(str[i]=='.')str[i] = oth++;
    }
    cout << str<< endl;

}
