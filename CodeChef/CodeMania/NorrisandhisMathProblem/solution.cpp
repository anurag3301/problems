#include<iostream>
using namespace std;

int main(){
    long long N, sum=0, s1, s2, s3;
    int x;
    cin >> x;
    while(x--){
        sum = 0;
        cin >> N;
        N--;
        s1 = ((N / 4)) * (2 * 4 + (N / 4 - 1) * 4) / 2;
        s2 = ((N / 6)) * (2 * 6 + (N / 6 - 1) * 6) / 2;
        s3 = ((N / 12)) * (2 * 12 + (N / 12 - 1) * 12) / 2;
        sum = s1 + s2 - s3;
        cout << sum << endl;
    }
    return 0;
} 

