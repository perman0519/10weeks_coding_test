/*
11655: ROT13
input1
Baekjoon Online Judge

output1
Onrxwbba Bayvar Whqtr

input2
One is 1

output2
Bar vf 1
*/
#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string input;
	// cin >> input;
	getline(cin, input);
	size_t len = input.size();
	for (int i = 0; i < len; i++) {
		if (isalpha((int)input[i])) {
			// char c;
			if (input[i] < 'a') {
				cout << (char)((input[i] - 'A' + 13) % 26 + 'A');
			}
			else {
				cout << (char)((input[i] - 'a' + 13) % 26 + 'a');
			}
		}
		else {
			cout << input[i];
		}
	}
	return 0;
}
