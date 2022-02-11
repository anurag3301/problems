// https://codeforces.com/problemset/problem/337/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, x; cin >> n >> m;
    vector<int> arr(m);
    for(int i=0; i<m; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int minimum=*max_element(arr.begin(), arr.end());
    for(int i=0; i<m-n+1; i++){
        minimum = min(minimum, *max_element(arr.begin()+i, arr.begin()+i+n)-*min_element(arr.begin()+i, arr.begin()+i+n));
    }
    // int minimum = *max_element(arr.begin()+m-n, arr.end())-*min_element(arr.begin()+m-n, arr.end());
    cout << minimum << endl;
}
