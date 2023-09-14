#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int t; cin >> t;
    float a, b, c;
    while(t--){
        cin >> a >> b >> c;
        int res = ceil((abs(a-b)/c)/2);
        cout << res << endl;
    }
}
