#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, n, k;
    cin >> n >> k;
    vector<int> score;
    while(n--){
        cin >> x;
        score.push_back(x);
    }
    int bande=0;
    for(auto x:score){
        if(x > 0 && x>=score[k-1]) bande++;
    }
    cout << bande << endl;
}
