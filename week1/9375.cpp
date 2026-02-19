/*
9375: 패션왕 신해빈 못품
경우의 수는 곱하기
*/

#include <bits/stdc++.h>
using namespace std;

int test_case;

int main(void) {
	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		int n;
		cin >> n;
		unordered_map<string, int> inputs;
		for (int j = 0; j < n; j++) {
			string name, type;
			cin >> name >> type;
			inputs[type]++;
		}
		int sum = 1;
		for (auto val : inputs) {
			sum *= (val.second + 1);
		}
		sum--;
		cout << sum << '\n';
		inputs.clear();
	}
	return 0;
}

// int t, n;
// string a, b;
// int main() {
// 	cin >> t;
// 	while(t--) {
// 		map<string, int> _map;
// 		cin >> n;
// 		for (int i = 0; i < n; i++) {
// 			cin >> a >> b;
// 			_map[b]++;
// 		}
// 		long long ret = 1;
// 		for (auto c : _map) {
// 			ret *= ((long long)c.second + 1);
// 		}
// 		ret--;
// 		cout << ret << endl;
// 	}
// }
