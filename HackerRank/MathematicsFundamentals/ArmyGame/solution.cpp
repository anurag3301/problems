// https://www.hackerrank.com/challenges/game-with-cells/problem
#include<bits/stdc++.h>
using namespace std;

int gameWithCells(int n, int m) {
  return ceil((float)n/2)*ceil((float)m/2);

}

int main(){
  int n, m;
  cin >> n >> m;
  cout << gameWithCells(n, m) << endl;
}
