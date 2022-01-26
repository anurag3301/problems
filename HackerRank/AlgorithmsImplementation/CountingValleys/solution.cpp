// https://www.hackerrank.com/challenges/counting-valleys/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    int m=0, v=0;
    int count=0;
    for(char c:s){
        if(m==0 && v==0){
            if(c=='U')m++;
            else v++;
        }
        else if(m){
            if(c=='U')m++;
            else m--;
        }
        else if(v){
            if(c=='D')v++;
            else v--;
            if(v==0)count ++;
        }
    }
    cout << count << endl;
}

