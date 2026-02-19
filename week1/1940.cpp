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

// #include <bits/stdc++.h>
// using namespace std;
// int n, m, a[15001], cnt;
// int main() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0), cout.tie(0);
// 	cin >> n >> m;
// 	for (int i = 0; i < n; i++)
// 		cin >> a[i];
// 	if (m > 200000)
// 		cout << 0 << "\n";
// 	else {
// 		for (int i = 0; i < n; i++) {
// 			for (int j = 0; j < i; j++) {
// 				if(a[i] + a[j] == m)
// 					cnt++;
// 			}
// 		}
// 		cout << cnt << '\n';
// 	}
// }


// #include <bits/stdc++.h>
// using namespace std;
// int n, m, a[15001], cnt;
// void combi(int idx, vector<int>& v){
// 	if (v.size() == 2) {
// 		int num1 = a[v[0]];
// 		int num2 = a[v[1]];
// 		if (num1 + num2 == m)cnt++;
// 		return;

// 	}
// 	for (int i = idx + 1; i < n; i++) {
// 		v.push_back(i);
// 		combi(i, v);
// 		v.pop_back();
// 	}
// }


// int main() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0), cout.tie(0);
// 	cin >> n >> m;
// 	for (int i = 0; i < n; i++)
// 		cin >> a[i];
// 	if (m > 200000)
// 		cout << 0 << "\n";
// 	else {
// 		vector<int> v;
// 		combi(-1, v);
// 		cout << cnt << '\n';
// 	}
// }
