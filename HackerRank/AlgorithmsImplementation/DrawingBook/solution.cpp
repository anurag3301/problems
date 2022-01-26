// https://www.hackerrank.com/challenges/drawing-book/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
   int n, p; cin >> n >> p;
   int l = p/2, r;
   if(n%2!=0){
       r = (n-p)/2;
   }
   else{
       r = (n==p)?0:1;
       n--;
       r += (n-p)/2;
   }

   cout << min(l, r) << endl;

}
