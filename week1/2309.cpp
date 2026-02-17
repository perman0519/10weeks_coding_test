// /*
//  일곱난쟁이 2309
// */
#include <bits/stdc++.h>
using namespace std;

int n = 9;
int r = 7;
vector<int> inputs(n, 0);

void sum(vector<int>& b) {
	int sum = 0;
	for (int high : b) {
		sum += high;
	}
	if (sum == 100) {
		for (int high : b) {
			cout << high << '\n';
		}
		exit(0);
	}
}

void combi(int start, vector<int>& b) {
	if (b.size() == r) {
		sum(b);
		return;
	}
	for (int i = start + 1; i < n; i++) {
		b.push_back(inputs[i]);
		combi(i, b);
		b.pop_back();
	}
}

int main(void) {
	vector<int> b;
	for (int i = 0; i < 9; i++) {
		int high;
		cin >> high;
		inputs[i] = high;
	}
	sort(inputs.begin(), inputs.end());
	combi(-1, b);
	return 0;
}

/*
do_while_next_purmutation
*/

// int main() {
// 	int inputs[9];
// 	for (int i = 0; i < 9; i++) {
// 		int h;
// 		cin >> h;
// 		inputs[i] = h;
// 	}
// 	sort(inputs, inputs + 9);
// 	do {
// 		int sum = 0;
// 		for (int i = 0; i < 7; i++)
// 			sum += inputs[i];
// 		if (sum == 100)
// 			break;
// 	} while(next_permutation(inputs, inputs + 9));
// 	for (int i = 0; i < 7; i++)
// 		cout << inputs[i] << '\n';
// }


/*
9P2 재귀
*/
// int a[9];
// int n = 9, r = 7;
// void print() {
// 	for (int i = 0; i < n; i++)
// 		cout << a[i] << ' ';
// 	cout << '\n';
// }

// void solve() {
// 	int sum = 0;
// 	for (int i = 0; i < r; i++) {
// 		sum += a[i];
// 	}
// 	if (sum == 100) {
// 		sort(a, a+7);
// 		for (int i = 0; i < r; i++)
// 			cout << a[i] << '\n';
// 		exit(0);
// 	}
// }
// void make_purmutation(int n, int r, int depth) {
// 	if (depth == r) {
// 		solve();
// 		return;
// 	}
// 	for (int i = depth; i < n; i++) {
// 		swap(a[i], a[depth]);
// 		make_purmutation(n, r, depth + 1);
// 		swap(a[i], a[depth]);
// 	}

// }
// int main(void) {
// 	for (int i = 0; i < 9; i++)
// 		cin >> a[i];
// 	sort(a, a + 9);
// 	make_purmutation(n, r, 0);
// 	return 0;
// }
