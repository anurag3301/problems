#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int domino = (m/2) * n;
    /*
    int rectange[m][n];
    memset( rectange, 0, sizeof(rectange));
    int ith=0, jth=0, domino=0;
    while(ith < m-1){
        for(int j=0; j<n; j++){
            domino+=1;
        }
        ith += 2;
    }
    */
    if(m%2!=0)domino += n/2;
    /*
    ith = m-1;
    while(jth < n-1 && m%2!=0){
        domino += 1;
        jth += 2;
    }
    */
    cout << domino << endl;
}
