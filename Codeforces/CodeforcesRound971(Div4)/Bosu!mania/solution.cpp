#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        vector<int> pos;
        int n; cin >> n;
        while(n--){
            string s; cin >> s;
            for(int i=0; i<4; i++){
                if(s[i]=='#'){
                    pos.push_back(i);
                }
            }
        }
        for(auto i=pos.rbegin(); i!=pos.rend(); i++){
            cout << (*i)+1 << " ";
        }
        cout << endl;
    }
}
