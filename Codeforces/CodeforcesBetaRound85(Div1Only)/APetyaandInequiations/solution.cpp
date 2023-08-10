// https://codeforces.com/contest/111/problem/A

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long long n, x, y;
    cin >> n >> x >> y;
    if(y-n+1 < 1){
        cout << -1 << endl;
        return 0;
    }
    long long pos = pow((y-n+1), 2) + (n-1);
    if(pos>=x){
        cout << y-n+1 << endl;
        for(long long i=0; i<n-1; i++){
            cout << 1 << endl;
        }
    }
    else{
        cout << -1 << endl;
    }
    
}
