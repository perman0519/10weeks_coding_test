/*
1629: 곱셈
*/

#include <bits/stdc++.h>
using namespace std;

long long a, b, c;

long long mod(long long a, long long b) {
	if (b == 1)
		return a % c;
	long long tmp = mod(a, b / 2);
	tmp = (tmp * tmp) % c;
	if (b % 2)
		tmp = tmp * a % c;
	return tmp;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cin >> a >> b >> c;
	cout << mod(a, b);
	return 0;
}
