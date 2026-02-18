/*
1620: 나는야 포켓몬 마스터 이다솜
*/

#include <bits/stdc++.h>
using namespace std;

int n, m;
unordered_map<string, int> names;
vector<string> number;

int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;
		names[input] = i;
		number.push_back(input);
	}
	for (int i = 0; i < m; i++) {
		string input;
		cin >> input;
		bool ch = false;
		for (char c : input) {
			if (!isdigit(c)) {
				cout << names[input] + 1 << '\n';
				ch = true;
				break;
			}
		}
		if (!ch) {
			int num = atoi(input.c_str());
			cout << number[num - 1] << '\n';
		}
	}
}
