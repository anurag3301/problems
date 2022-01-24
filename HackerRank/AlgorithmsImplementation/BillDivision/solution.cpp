// https://www.hackerrank.com/challenges/bon-appetit/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, x;
    cin >> n >> k;
    vector<int> arr;
    while(n--){
        cin >> x;
        arr.push_back(x);
    }
    int b; cin >> b;
    int total = accumulate(arr.begin(), arr.end(), 0);
    int a = (total-arr[k])/2;
    if(a==b)
        cout << "Bon Appetit" << endl;
    else
        cout << b - a << endl;
}
