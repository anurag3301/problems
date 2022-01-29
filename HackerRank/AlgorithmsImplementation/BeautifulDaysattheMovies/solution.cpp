// https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, j, k, x, rev=0, rem, count=0;
    cin >> i >> j >> k;
    for(int m=i; m<=j; m++){
        int n=m, rev=0;
        while(n != 0){
            rem = n%10;
            rev = rev*10 + rem;
            n /= 10;
        }
        if(abs(m-rev)%k==0)count++;
    }
    cout << count << endl;
}
