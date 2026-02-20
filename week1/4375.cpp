/*
4375: 1
*/
#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	while (cin >> n) {
		int num = 1;
		int count = 1;

		while(1) {
			if (num % n == 0) {
				cout << count << '\n';
				break;
			}

			num = (num * 10 + 1) % n;
			count += 1;
		}
	}
}
