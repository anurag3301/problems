#include <vector>
#include <set>
#include <iostream>
#include <cstring>

using namespace std;

int main(){

    string s;
    set<char> c;
    cin >> s;

    for(int i=0; i<s.length(); i++){
        c.insert(s[i]);
    }

    if(c.size() % 2 == 0) cout << "CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;

    return 0;
}
