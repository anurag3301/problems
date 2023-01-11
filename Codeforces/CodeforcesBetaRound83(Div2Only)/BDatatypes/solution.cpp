// https://codeforces.com/contest/108/problem/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x; cin >> n;
    set<int> data_s;
    while(n--){
        cin>>x;
        data_s.insert(x);
    }

    vector<int> data(data_s.begin(), data_s.end());

    sort(data.begin(), data.end(), greater<>());
    
    if(data[1]==1){
        if(data[0]>0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
        return 0;
    }

    for(int i=0; i<data.size()-1; i++){
        if(data[i]<(data[i+1]*2)){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

}
