#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        string s, t;
        cin >> s >> t;
        size_t t_pos = 0;
        size_t i;
        for(i=0; i<s.length(); i++){
            if(s[i] == t[t_pos])t_pos++;
            if(s[i] == '?')s[i] = t[t_pos++];
            if(t.length() == t_pos)break;
        }

        for(i=0; i<s.length(); i++){
            if(s[i]=='?')s[i] = t[t_pos-1];
        }
        if(t.length() == t_pos){
            cout << "YES" << endl;
            cout << s << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
