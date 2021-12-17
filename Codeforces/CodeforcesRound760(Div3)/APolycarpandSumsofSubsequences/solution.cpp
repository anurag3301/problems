// https://codeforces.com/contest/1618/problem/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x; cin >> n;
    while(n--){
        vector<int> arr;
        for(int i=0; i<7; i++){
            cin >> x;
            arr.push_back(x);
        }
        int a = arr[0], b = arr[1], c;
        for(int k:arr){
            if(a+b+k == arr[arr.size()-1])c = k;
        }
        // Output can be in any order
        cout << a << " " << b << " " << c << endl;
    }
}

