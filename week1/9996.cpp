/*
9996: 한국이 그리울 땐 서버에 접속하지
input1
3
a*d
abcd
anestonestod
facebook

output2
DA
DA
NE

input1
6
h*n
huhovdjestvarnomozedocisvastan
honijezakon
atila
je
bio
hun

output2
DA
DA
NE
NE
NE
DA
*/

#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	string pattern;
	cin >> pattern;
	string pat1, pat2;
	size_t find1 = pattern.find("*");
	pat1 = pattern.substr(0, find1);
	pat2 = pattern.substr(find1+1);
	// cout << pat1 << " " << pat2;
	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;
		// cout << input.substr(0, pat1.size()) << " " << input.substr(input.size() - pat2.size()) << endl;
		if (input.size() < pat1.size() + pat2.size()) {
			cout << "NE\n";
			continue;
		}
		if (input.substr(0, pat1.size()) == pat1 && input.substr(input.size() - pat2.size()) == pat2) {
			cout << "DA\n";
		}
		else
			cout << "NE\n";
	}
	return 0;
}
