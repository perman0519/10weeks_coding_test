#include <bits/stdc++.h>
using namespace std;
int main(void) {
	int a = 4;
	int *b = &a;
	int &a_ref = a;
	cout << &b << &a_ref << &a << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(a_ref) << endl;
	size_t t = 5;
	cout << sizeof(t) << endl;
}
