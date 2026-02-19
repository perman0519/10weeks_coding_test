/*
1940: 주몽
*/

#include <bits/stdc++.h>
using namespace std;

int m, n;
int num[15001];

int ret;
map<int, bool> ch;

void solve() {
	if (num[0] + num[1] == m) {
		if (ch[num[0]] || ch[num[1]])
			return;
		ch[num[0]] = true;
		ch[num[1]] = true;
		ret++;
	}
}

void combi(int n, int r, int depth) {
	if (r == depth) {
		solve();
		return;
	}
	for (int i = depth; i < n; i++) {
		swap(num[i], num[depth]);
		combi(n, r, depth + 1);
		swap(num[i], num[depth]);
	}
}
int main() {
	cin >> n;
	cin >> m;
	for (int i = 0; i < n; i++)
		cin >> num[i];
	sort(num, num + n);
	combi(n, 2, 0);
	cout << ret;

}
