/*
3986: 좋은 단어
*/

#include <bits/stdc++.h>
using namespace std;

int n, ret;

int main() {
	cin >> n;
	while (n--) {
		string str;
		cin >> str;
		stack<char> _stack;
		for (int i = 0; i < str.size(); i++) {
			if (_stack.empty()) {
				_stack.push(str[i]);
				continue;
			}
			if (!_stack.empty() && _stack.top() == str[i]) {
				_stack.pop();
				continue;
			}
			if (!_stack.empty() && _stack.top() != str[i]) {
				_stack.push(str[i]);
			}
		}
		if (_stack.empty())
			ret++;
	}
	cout << ret;
	return 0;
}
