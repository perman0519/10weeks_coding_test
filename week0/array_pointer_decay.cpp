#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a[5] = {1,2,3,4,5};
	int* c  = a;
	cout << c << endl;
	cout << &a[0] << endl;
	cout << c + 1<< endl;
	cout << &a[1] << endl;
	return 0;
}
