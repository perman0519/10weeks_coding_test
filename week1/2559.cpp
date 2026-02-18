/*
2559: 수얼
input1
10 2
3 -2 -4 -9 0 3 7 13 8 -3

ouput1
21

input2
10 5
3 -2 -4 -9 0 3 7 13 8 -3

output2
31
*/
#include <bits/stdc++.h>
using namespace std;

int n, k;
int max_degrees;
int inputs[100001];
int sums[100001];

int main() {
	cin >> n >> k;
	cin >> inputs[0];
	sums[0] = inputs[0];
	for (int i = 1; i < n; i++) {
		cin >> inputs[i];
		sums[i] = inputs[i] + sums[i - 1];
	}
	max_degrees = sums[k - 1];
	for (int i = k; i < n; i++) {
		int sum = sums[i] - sums[i - k];
		max_degrees = max(sum, max_degrees);
	}
	cout << max_degrees;
}
