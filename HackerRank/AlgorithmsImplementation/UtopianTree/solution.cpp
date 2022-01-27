// https://www.hackerrank.com/challenges/utopian-tree/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, h;
    cin >> t;
    while(t--){
        h=1;
        cin >> n;
        for(int i=1; i<=n; i++){
            if(i%2==0)
                h++;
            else
                h*=2;
        }
        cout << h << endl;
    }
}
