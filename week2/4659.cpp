#include <bits/stdc++.h>

using namespace std;

bool ch_aeiou(char c) {
	return (c == 'a' || c == 'i' || c == 'e' || c == 'o' || c == 'u');
}
int main(void) {
	string str;
	while (true) {
		cin >> str;
		if (str == "end")
			return 0;
		size_t str_size = str.size();
		bool aeiou_ch = false;
		bool three_ch = false;
		bool twice_ch = false;
		int three = 1;
		char before = str[0];
		if (ch_aeiou(str[0])) {
			aeiou_ch = true;
		}
		for (int i = 1; i < str_size; i++) {
			if (ch_aeiou(str[i])) {
				aeiou_ch = true;
			}
			if (ch_aeiou(str[i]) && ch_aeiou(before))
				three++;
			else if (!ch_aeiou(str[i]) && !ch_aeiou(before))
				three++;
			else
				three = 1;
			if (three == 3) {
				cout << '<' << str << "> is not acceptable.\n";
				three_ch = true;
				break;
			}
			if ((str[i] == before) && (str[i] != 'e' && str[i] != 'o')) {
				cout << '<' << str << "> is not acceptable.\n";
				twice_ch = true;
				break;
			}
			before = str[i];
		}
		if (!three_ch && !twice_ch) {
			if (!aeiou_ch)
				cout << '<' << str << "> is not acceptable.\n";
			else
				cout << '<' << str << "> is acceptable.\n";
		}
	}
}
