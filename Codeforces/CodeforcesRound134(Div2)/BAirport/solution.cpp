// https://codeforces.com/problemset/problem/218/B
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<int> arr(m);
    for(int i=0; i<m; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<int> formax(arr);
    vector<int> formin(arr);
    int pricemax=0, pricemin=0;
    for(int i=0; i<n; i++){
        pricemax+=formax[m-1];
        pricemin+=formin[0];
        formax[m-1]--;
        formin[0]--;
        if(formin[0]==0)
            formin[0] = 1001;
        sort(formax.begin(), formax.end());
        sort(formin.begin(), formin.end());
    }
    cout << pricemax <<" " << pricemin<< endl;

}
