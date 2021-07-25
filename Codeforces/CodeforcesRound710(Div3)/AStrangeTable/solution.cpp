#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        long long n, m, v;
        cin >> n >> m >> v;
        long long x=0, y=0, val=0;
        y = v / n;
        x = v % n;
        if (v%n==0){
            y--;
            v--;
            x = v % n;
            x++;
        }
        y++;
        x--;
        val += x * m;
        val += y;
        cout << val << endl;
    }
    return 0;
}
