// https://www.hackerrank.com/challenges/divisible-sum-pairs/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, x, count=0;
    cin >> n;
    cin >> k;
    vector<int> arr;
    while(n--){
        cin >> x;
        arr.push_back(x);
    }

    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size(); j++){
            if((arr[i]+arr[j])%k==0 && i<j){
                count++;
            }
        }
    }
    cout << count << endl;

}
