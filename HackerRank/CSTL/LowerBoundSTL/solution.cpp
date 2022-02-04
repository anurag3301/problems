// https://www.hackerrank.com/challenges/cpp-lower-bound/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q, x;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> q;
    while(q--){
        cin >> x;
        vector<int>::iterator it = lower_bound(arr.begin(), arr.end(), x);

        if(arr[it-arr.begin()] == x)
            cout << "Yes " << (it - arr.begin() + 1) << endl;
        else
            cout << "No " << (it - arr.begin() + 1) << endl;
        
    }
}
