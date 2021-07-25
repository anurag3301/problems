#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b, c, total = 0;
    while(n--){
        cin >> a >> b >> c;
        if((a + b + c) > 1) total++;
    }
    cout << total << endl;
}
