// https://codeforces.com/contest/108/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    string in; cin >> in;
    string hrs_s = in.substr(0, 2);
    string min_s = in.substr(3, 2);

    int hrs = atoi(hrs_s.c_str());
    int min = atoi(min_s.c_str())+1;

    reverse(hrs_s.begin(), hrs_s.end());
    int hrs_r = atoi(hrs_s.c_str());

    if(hrs_r >= min && hrs_r < 59){
        printf("%02d:%02d\n", hrs, hrs_r);
        return 0;
    }
    if(hrs == 23){
        cout << "00:00" << endl;
        return 0;
    }
    while(true){
        string hu = to_string(++hrs);
        if(hu.length()==1)hu = '0'+hu;
        reverse(hu.begin(), hu.end());
        int hui = atoi(hu.c_str());
        if(hui<59){
            printf("%02d:%02d\n", hrs, hui);
            return 0;
        }
    }

}
