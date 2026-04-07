#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {
	if (n == 1 || n == 0)
		return 1;
	return n * factorial(n - 1);
}

int main(void) {
	int n, k;
	cin >> n >> k;
	cout << factorial(n) / (factorial(n - k) * factorial(k)) << '\n';
	return 0;
}
