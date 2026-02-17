/*
2979번: 트럭 주차
input1
5 3 1
1 6
3 5
2 8
output1
33
input2
10 8 6
15 30
25 50
70 80
output2
480
*/
#include <bits/stdc++.h>
using namespace std;

int a, b, c;
int times[100];

int main(void) {
	cin >> a >> b >> c;
	for (int i = 0; i < 3; i++) {
		int start, end;
		cin >> start >> end;
		for (int j = start; j < end; j++) {
			times[j]++;
		}
	}
	int sum = 0;
	for (int i = 0; i < 100; i++) {
		switch (times[i]) {
			case 1:
				sum += a;
				break;

			case 2:
				sum += b * 2;
				break;

			case 3:
				sum += c * 3;
				break;
		}
	}
	cout << sum;
	return 0;
}


