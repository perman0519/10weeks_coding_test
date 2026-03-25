// #include <bits/stdc++.h>

// using namespace std;

// int n;
// int logn;
// int b[64][64];
// int check[64][64];

// int recur(int n, int y, int x) {
// 	if (n == 2) {
// 		int r = 0;
// 		r += b[y][x];
// 		r += b[y][x+1];
// 		r += b[y+1][x];
// 		r += b[y+1][x+1];
// 		if (r == 4)
// 			return 1;
// 		else if (r == 0)
// 			return 0;
// 		else {
// 			cout << '(' << b[y][x] << b[y][x+1] << b[y+1][x] << b[y+1][x+1] << ')';
// 			return -10;
// 		}
// 	}
// 	int a[4];
// 	a[0] = recur(n / 2, y, x);
// 	a[1] = recur(n / 2, y, x + n / 2);
// 	a[2] = recur(n / 2, y + n / 2, x);
// 	a[3] = recur(n / 2, y + n / 2, x + n / 2);
// 	if (a[0] + a[1] + a[2] + a[3] == 4)
// 		return 1;
// 	else if (a[0] + a[1] + a[2] + a[3] == 0)
// 		return 0;
// 	else {
// 		cout << '(';
// 		for (int i = 0; i < 4; i++) {
// 			if (a[i] == 1)
// 				cout << '1';
// 			else if (a[i] == 0)
// 				cout << '0';
// 		}
// 		cout << ')';
// 		return -1;
// 	}
// }

// int main(void) {
// 	cout.tie(0);
// 	cin.tie(0);
// 	cin >> n;
// 	int on = n;
// 	while (on != 1) {
// 		logn++;
// 		on = on >> 1;
// 	}

// 	string str;
// 	for (int i = 0; i < n; i++) {
// 		cin >> str;
// 		for (int j = 0; j < n; j++) {
// 			b[i][j] = str[j] - '0';
// 		}
// 	}
// 	cout<< '(';
// 	recur(n, 0, 0);
// 	cout<< ')';


// 	return 0;
// }

#include <bits/stdc++.h>

using namespace std;

char b[64][64];
int n;

string recur(int n, int y, int x) {
	if (n == 1)
		return string(1, b[y][x]);
	char ch = b[y][x];
	string ret = "";
	for (int i = y; i < y + n; i++) {
		for (int j = x; j < x + n; j++) {
			if (ch != b[i][j]) {
				ret += '(';
				ret += recur(n / 2, y, x);
				ret += recur(n / 2, y, x + n / 2);
				ret += recur(n / 2, y + n / 2, x);
				ret += recur(n / 2, y + n / 2, x + n / 2);
				ret += ')';
				return ret;
			}
		}
	}
	return string(1, b[y][x]);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	string s;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < n; j++) {
			b[i][j] = s[j];
		}
	}
	cout << recur(n, 0, 0) << '\n';
	return 0;
}
