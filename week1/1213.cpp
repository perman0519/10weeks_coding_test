/*
1213: 팰린드롬 만들기 못품
*/

#include <bits/stdc++.h>
using namespace std;

// string input;
// char a[51];

// void solve() {
// 	for (int i = 0; i < input.size() / 2; i++) {
// 		if (a[i] != a[input.size() - i - 1])
// 			return;
// 	}
// 	cout << a;
// 	exit(0);
// }

// int main() {
// 	cin.tie(0), cout.tie(0);
// 	cin >> input;
// 	for (int i = 0; i < input.size(); i++)
// 		a[i] = input[i];
// 	sort(a, a + input.size());
// 	cout << a;
// 	do {
// 		cout << a << endl;
// 		solve();
// 	} while(next_permutation(a, a+ input.size()));
// 	cout << "I'm Sorry Hansoo";
// 	return 0;
// }

// string s, ret;
// int cnt[200], flag;
// char mid;

// int main() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0), cout.tie(0);
// 	cin >> s;
// 	for (char a : s)
// 		cnt[(int)a]++;
// 	for (int i = 'Z'; i >= 'A'; i--) {
// 		if (cnt[i]) {
// 			if (cnt[i] & 1) {
// 				mid = char(i);
// 				flag++;
// 				cnt[i]--;
// 			}
// 			if (flag == 2)
// 				break;
// 			for (int j = 0; j < cnt[i]; j += 2){
// 				ret = char(i) + ret;
// 				ret += char(i);
// 			}
// 		}
// 	}
// 	if (mid)
// 		ret.insert(ret.begin() + ret.size() / 2, mid);
// 	if (flag == 2)
// 		cout << "I'm Sorry Hansoo";
// 	cout << ret;
// 	return 0;
// }


string s, ret;
int cnt[200], flag;
char mid;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	cin >> s;
	for (char c : s) {
		cnt[(int)c]++;
	}
	for (int i = 'Z'; i >= 'A'; i--) {
		if (cnt[i]) {
			if (cnt[i] & 1) { // 홀수
				flag++;
				mid = (char)i;
				cnt[i]--;
			}
			if (flag == 2)
				break;
			for (int j = 0; j < cnt[i]; j += 2) {
				ret = (char)i + ret;
				ret += (char)i;
			}
		}
	}
	if (mid)
		ret.insert(ret.begin() + ret.size() / 2, mid);
	if (flag == 2)
		cout << "I'm Sorry Hansoo";
	else
		cout << ret;
}
