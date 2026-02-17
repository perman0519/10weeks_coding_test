#include <bits/stdc++.h>
using namespace std;

vector<string> split(const string& input, const string& delimiter) {
	vector<string> result;
	auto start = 0;
	auto end = input.find(delimiter);
	while (end != string::npos) {
		result.push_back(input.substr(start, end - start));
		start = end + delimiter.size();
		end = input.find(delimiter, start);
	}
	result.push_back(input.substr(start, end - start));
	return result;
}

int main(void) {
	string str = "hi-->my-->name-->is-->junsang-->song";
	vector<string> split_v = split(str, "->");
	for (string v : split_v)
		cout << v << "\n";
	return 0;
}
