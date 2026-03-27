#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int n, c;
	cin >> n >> c;
	vector<int> vec(n);
	unordered_map<int, int> freq;
	unordered_map<int, int> order;

	for (int i = 0; i < n; i++) {
		cin >> vec[i];
		freq[vec[i]]++;
		if (order.find(vec[i]) == order.end()) {
			order[vec[i]] = i;
		}
	}

	sort(vec.begin(), vec.end(), [&](int a, int b) {
		if (freq[a] != freq[b])
			return freq[a] > freq[b];
		return order[a] < order[b];
	});

	for (int x : vec)
		cout << x << ' ';
}
