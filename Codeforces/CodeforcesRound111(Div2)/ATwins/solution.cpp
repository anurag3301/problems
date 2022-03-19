// https://codeforces.com/problemset/problem/160/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int mid = accumulate(arr.begin(), arr.end(), 0) / 2;
    int count=0;
    for(int i=n-1; i>=0; i--){
        mid-=arr[i];
        count++;
        if(mid<0){
            break;
        }
    }
    cout << count << endl;
}
