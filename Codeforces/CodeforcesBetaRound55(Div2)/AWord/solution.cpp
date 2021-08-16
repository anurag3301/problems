//https://codeforces.com/problemset/problem/59/A
#include <iostream>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main()
{
	string word;
	cin >> word;
	int u = 0, l = 0;
	for (char x : word)
	{
		if (isupper(x))
			u++;
		else
			l++;
	}
	if (u > l)
		transform(word.begin(), word.end(), word.begin(), ::toupper);
	else
		transform(word.begin(), word.end(), word.begin(), ::tolower);
	cout << word << endl;

	// added a comment
}
