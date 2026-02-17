#include <bits/stdc++.h>
using namespace std;

//조합
//nCr = n! / r!(n - r)!
//5C3 = 5! / 3!(5 - 3)! = 20 / 2 = 10;

int v[5] = {1,2,3,4,5};
int n = 5, r = 2;

void print(vector<int> &b) {
	for(int i : b)
		cout << i << " ";
	cout << "\n";
}

void combi(int start, vector<int> &b) {
	if (b.size() == r) {
		print(b);
		return;
	}
	for (int i = start + 1; i < n; i++) {
		b.push_back(i);
		combi(i,  b);
		b.pop_back();
	}
}
int main() {
	vector<int> b;
	combi(-1, b);
	// for (int i = 0; i < n; i++) {
	// 	for (int j = i + 1; j < n; j++) {
	// 		// cout << i << " : " << j << " : " << "\n";
	// 		for (int k = j + 1; k < n; k++) {
	// 			for (int l = k + 1; l < n; l++) {
	// 				cout << i << " : " << j << " : " << k << " : " << l << "\n";
	// 			}
	// 		}
	// 	}
	// }
	return 0;
}
