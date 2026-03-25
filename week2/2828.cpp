#include <bits/stdc++.h>

using namespace std;

int n, m, j;
int b[21];
int ret;

int main() {
	cin >> n >> m;
	cin >> j;
	int start = 1;
	int end = m;
	for (int i = 0; i < j; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < j; i++) {
		if (b[i] > end) {
			int ch = b[i] - end;
			start += ch;
			end += ch;
			ret += ch;
		}
		else if (b[i] < start) {
			int ch = start - b[i];
			start -= ch;
			end -= ch;
			ret += ch;
		}
	}
	cout << ret;
	return 0;
}
