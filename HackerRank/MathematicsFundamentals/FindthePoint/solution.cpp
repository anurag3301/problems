// https://www.hackerrank.com/challenges/find-point/problem
#include<bits/stdc++.h>
using namespace std;

vector<int> findPoint(int px, int py, int qx, int qy) {
  vector<int> res;
  res.push_back(2*qx-px);
  res.push_back(2*qy-py);
  return res;

}

int main(){
  int n; cin >> n;
  int px, py, qx, qy;
  vector<int> res;
  while(n--){
    cin >> px >> py >> qx >> qy;
    res = findPoint(px, py, qx, qy);
    cout << res[0] << " " << res[1]<< endl;
    res.clear();
  }
}
