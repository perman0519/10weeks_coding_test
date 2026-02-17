#include <bits/stdc++.h>
using namespace std;

int n, a[1004], cnt;
int go(int l, int r) {
	cnt++;
	if(l == r)
		return a[l];
	int mid = (l + r) / 2;
	return (go(l, mid) + go(mid + 1, r));
}

int main(void) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		a[i] = i + 1;
	}
	int sum = go(0, n - 1);
	cout << "cnt : " << cnt << '\n';
	cout << sum << '\n';
}
