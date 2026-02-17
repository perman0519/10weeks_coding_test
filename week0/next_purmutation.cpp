#include <bits/stdc++.h>

int main(void) {
	std::vector<int> va = {2,1,3,100, 200,400};
	// int a[] = {1,2,3};
	std::sort(va.begin(), va.end());
	do {
		for (int i  = 0; i < 2; i++) {
			std::cout << va[i] << " "; //slice
		}
		// for (int i : va) std::cout << i << " ";
		std::cout << "\n";
	} while(std::next_permutation(va.begin(), va.end()));

	//공식이 있음 nRr = n! / (n - r)!
	//ex n=6 r=2 ->  6! / (6-2)!
	return 0;
}
