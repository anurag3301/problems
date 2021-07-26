//https://codeforces.com/problemset/problem/116/A
#include<iostream>

using namespace std;
int main(){
	int n, size=0, i, o, pass=0;
	cin >> n;
	while(n--){
		cin >> o >> i;
		pass = (pass-o) + i;
		if(size < pass)size =  pass;
	}
	cout << size << endl;
}
