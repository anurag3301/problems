#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    char c;
    while(n--){
        for(int i=0; i<64; i++){
            cin >> c;
            if(c!='.')cout << c;
        }
        cout << endl;
    }
}
