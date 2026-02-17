#include <bits/stdc++.h>
using namespace std;

int v[3] = {1,2,3};
int n = 3, r = 3;

void printV(int *v) {
	for (int i = 0; i < 3; i++) {
		cout << v[i] << " ";
	}
	cout << "\n";
}

void make_permutation(int n, int r, int depth) {
	cout << n << " : " << r << " : " << depth << "\n";
	if (r == depth) {
		printV(v);
		return;
	}
	for (int i = depth; i < n; i++) {
		swap(v[i], v[depth]);
		make_permutation(n, r, depth + 1);
		swap(v[i], v[depth]);
	}
	return;
}

int main(void) {
	make_permutation(n, r, 0);
	return 0;
}
