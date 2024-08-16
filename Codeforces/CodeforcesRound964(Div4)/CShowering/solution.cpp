#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    int n, s, m;
    while(t--){
        cin >> n >> s >> m;
        int last = 0;
        bool found = false;
        vector<pair<int, int>> task(n);
        for(int i=0; i<n; i++)cin >> task[i].first >> task[i].second;
        for(int i=0; i<n; i++){
            if(task[i].first-last >= s){
                found = true;
                break;
            }
            last = task[i].second;
        }
        if(m-last >= s || found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
