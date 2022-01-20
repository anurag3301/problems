// https://www.hackerrank.com/challenges/between-two-sets/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, x; cin >> n >> m;
    vector<int> a;
    vector<int> b;

    while(n--){
        cin >> x;
        a.push_back(x);
    }
    while(m--){
        cin >> x;
        b.push_back(x);
    }
    int max_val = max(*max_element(a.begin(), a.end()), *max_element(b.begin(), b.end()));
    int min_val= min(*min_element(a.begin(), a.end()), *min_element(b.begin(), b.end()));
    int count=0;
    for(int i=min_val; i<=max_val; i++){
        bool valid = true;
        for(int k:a){
            if(i%k!=0){
                valid = false;
                break;
            }
        }
        if(valid){
            for(int k:b){
                if(k%i!=0){
                    valid = false;
                    break;
                }
            }
        }
        if(valid)count++;
    }
    cout << count << endl;
}
