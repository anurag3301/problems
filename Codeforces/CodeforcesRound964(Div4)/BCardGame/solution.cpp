#include <bits/stdc++.h>
using namespace std;

int judge(int a, int b){
    if(a > b) return 1;
    if(a == b) return 0;
    if(a < b) return -1;
    return 0;
}

int main(){
    int n; cin >> n;
    int a1, a2, b1, b2;
    while(n--){
        cin >> a1 >> a2 >> b1 >> b2;
        int count = 0;
        if(judge(a1,b1) + judge(a2,b2) > 0)count++;
        if(judge(a1,b2) + judge(a2,b1) > 0)count++;
        if(judge(a2,b1) + judge(a1,b2) > 0)count++;
        if(judge(a2,b2) + judge(a1,b1) > 0)count++;
        cout << count << endl;
    }
}
