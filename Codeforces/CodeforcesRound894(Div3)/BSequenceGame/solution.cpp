#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> vec(n);
        vector<int> result;
        for(int i=0; i<n; i++){
            cin >> vec[i];
        }
        result.push_back(vec[0]);
        for(int i=1; i<vec.size(); i++){
            if(vec[i]<vec[i-1]){
                result.push_back((vec[i]-1 < 1)?1:vec[i]-1);
            }
            result.push_back(vec[i]);
        }
        cout << result.size() << endl;
        for(int i=0; i<result.size(); i++){
            cout << result[i] << " ";
        }
        cout << endl;

    }
}
