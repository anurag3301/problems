// https://codeforces.com/problemset/problem/275/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int bulb[3][3];
  int in[3][3];
  int x;

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cin >> x;
      in[i][j] = x;
    }
  }

  for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
      bulb[i][j] = 1;

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      x = in[i][j];
      if(x%2!=0){
        bulb[i][j] = !bulb[i][j];
        if(i>0)bulb[i-1][j] = !bulb[i-1][j];
        if(j>0)bulb[i][j-1] = !bulb[i][j-1];
        if(i<2)bulb[i+1][j] = !bulb[i+1][j];
        if(j<2)bulb[i][j+1] = !bulb[i][j+1];
      }
    }
  }
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cout << bulb[i][j];
    }
    cout << endl;
  }
}
