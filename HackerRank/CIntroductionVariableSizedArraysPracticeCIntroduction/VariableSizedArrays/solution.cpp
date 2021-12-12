// https://www.hackerrank.com/challenges/variable-sized-arrays
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q, k, x;
    cin >> n >> q;
    string str;
    vector<vector<int>> arr;
    while(n--){
        cin >> k;
        vector<int> temp;
        while(k--){
           cin >> x;
           temp.push_back(x);
        }
        arr.push_back(temp);
    }
    int i, j;
    while(q--){
        cin >> i >> j;
        cout << arr[i][j] << endl;
    }

}
