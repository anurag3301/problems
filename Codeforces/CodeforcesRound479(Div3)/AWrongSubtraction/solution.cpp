#include<iostream>
using namespace std;

int main(){
	int n, k, re;
	cin >> n >> k;
	while(1){
		re = n % 10;
		if(k <= re){
			n -= k;
			cout << n << endl;
			break;
		}
		else{
			n -= re;
			k -= re + 1;
			n /= 10;
		}
	}
}
