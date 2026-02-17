/*
10988: 팰린드롬인지 확인하기
input1
level
output1
1
input2
baekjoon
output2
0
*/
#include <bits/stdc++.h>
using namespace std;

string input;

int main() {
	cin >> input;
	size_t input_len = input.size();
	for (int i = 0; i < input_len / 2; i++) {
		if (input[i] != input[input_len - i - 1]) {
			cout << 0;
			return 0;
		}
	}
	cout << 1;
	return 0;
}
