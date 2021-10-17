// https://www.hackerrank.com/challenges/lowest-triangle/problem
#include<bits/stdc++.h>
using namespace std;

int lowestTriangle(int trianglebase, int area) {
  return ceil((float)(2*area)/trianglebase);

}

int main(){
  int a, b;
  cin >> b >> a;
  cout << lowestTriangle(b, a) << endl;
}
