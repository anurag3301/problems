#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<char> s = {'S', 'H', 'D', 'C'};
    vector<char> r = {'6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};

    char trump; cin >> trump;
    string c1, c2; cin >> c1 >> c2;
    char c1r=c1[0], c1s=c1[1], c2r=c2[0], c2s=c2[1];
    if(c1s == c2s){
        vector<char>::iterator c1i = find(r.begin(), r.end(), c1r);
        vector<char>::iterator c2i = find(r.begin(), r.end(), c2r);
        if(distance(r.begin(), c1i) > distance(r.begin(), c2i)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else if(c1s == trump){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
