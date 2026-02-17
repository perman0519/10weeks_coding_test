/*
1159: 농구 경기
input1
18
babic
keksic
boric
bukic
sarmic
balic
kruzic
hrenovkic
beslic
boksic
krafnic
pecivic
klavirkovic
kukumaric
sunkic
kolacic
kovacic
prijestolonasljednikovi
output1
bk
input2
6
michael
jordan
lebron
james
kobe
bryant
output2
PREDAJA
*/
#include <bits/stdc++.h>
using namespace std;

int a[26];

int main() {
	int cnt;
	cin >> cnt;

	for (int i = 0; i < cnt; i++) {
		string str;
		cin >> str;
		a[str[0] - 'a']++;
	}
	bool check = false;
	for (int i = 0; i < 26; i++) {
		if (a[i] >= 5) {
			cout << (char)(i + 'a');
			check = true;
		}
	}
	if (!check) {
		cout << "PREDAJA";
	}
}
