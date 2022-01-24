// https://www.hackerrank.com/challenges/the-birthday-bar/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d, m, x, count=0;
    vector<int> arr;
    cin >> n;
    while(n--){
        cin >> x;
        arr.push_back(x);
    }
    cin >> d >> m;
    for(int i=0; i<=(arr.size()); i++){
        int sum=0;
        for(int j=i; j<i+m; j++){
            sum += arr[j];
        }
        if(sum == d)count ++;
    }

    cout << count << endl;
}
