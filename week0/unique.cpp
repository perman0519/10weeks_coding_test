#include <bits/stdc++.h>
using namespace std;

// map<int, int> mp;

// int main() {
// 	vector<int> v{1,2,3,3,4,4,5};
// 	for (int i : v) {
// 		if (mp[i]) {
// 			continue;
// 		} else {
// 			mp[i] = 1;
// 		}
// 	}
// 	vector<int> ret;
// 	for (auto it : mp) {
// 		ret.push_back(it.first);
// 	}
// 	for (int i : ret)
// 		cout << i << endl;
// }

vector<int> v;
int main(){
	for (int i = 0; i < 100; i++) {
		v.push_back(i);
		v.push_back(i);
	}
	sort(v.begin(), v.end());
	for (int i : v)
		cout << i << ' ';
	cout << endl;

	// auto it = unique(v.begin(), v.end());
	// cout << it - v.begin() << '\n';
	v.erase(unique(v.begin(), v.end()), v.end());
	for (int i : v)
		cout << i << " ";
	cout << '\n';
	return 0;
}
