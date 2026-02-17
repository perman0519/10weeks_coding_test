#include <bits/stdc++.h>

int factorial(int n)
{
	// if (n == 1 || n == 0) return 1;
	// return n * factorial(n - 1);
	int ret = 1;
	for (int i = 1; i <= n; i++) {
		ret *= i;
	}
	return ret;
}

int fibo(int n)
{
	// if (n == 0) return 0;
	// else if (n == 1) return 1;
	if (n == 0 || n == 1) return n;
	return fibo(n - 1) + fibo(n - 2);
}

int main(void) {
	int n = 7;
	std::cout << factorial(n) << " " << fibo(n) << std::endl;

	return 0;
}
