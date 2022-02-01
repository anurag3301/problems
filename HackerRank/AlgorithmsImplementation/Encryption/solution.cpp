// https://www.hackerrank.com/challenges/encryption/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    vector<string> split;
    int col = ceil(sqrt(s.length())), row = floor(sqrt(s.length()));
    row += ((col * row) >= s.length())? 0 : 1;
    for(int i=0; i<row; i++){
        split.push_back(s.substr(col * i, col));
    }

    for(int i=0; i<split[0].length(); i++){
        for(string k: split){
            if(i<k.length())cout << k[i];
        }
        if(i!=split[0].length()-1)
        cout << " ";
    }
    cout << endl;


}
