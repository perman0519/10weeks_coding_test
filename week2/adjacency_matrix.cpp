// #include <bits/stdc++.h>

// using namespace std;

// bool a[10][10] = {
// 	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
// 	{0, 0, 1, 1, 0, 0, 0, 0, 0, 0},
// 	{0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
// 	{0, 1, 0, 0, 1, 0, 0, 0, 0, 0},
// 	{0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
// 	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
// 	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
// 	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
// 	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
// 	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
// };

// bool check[10];

// void recur(int i, int j) {
// 	if (check[i]) {
// 		return;
// 	}
// 	check[i] = 1;
// 	for (int new_j = 0; new_j < 10; new_j++) {
// 		if (a[i][new_j]) {
// 			if (!check[new_j])
// 				cout << i << "->" << new_j << '\n';
// 			recur(new_j, i);
// 		}
// 	}
// }

// int main(void) {
// 	for (int i = 0; i < 10; i++) {
// 		check[i] = 1;
// 		for (int j = 0; j < 10; j++) {
// 			if (a[i][j] == 1) {
// 				if (!check[j])
// 					cout << i << "->" << j << '\n';
// 				recur(j, i);
// 			}
// 		}
// 	}
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

const int V = 10;
int a[10][10], visited[10];

void go(int from)
{
	visited[from] = 1;
	cout << from << '\n';
	for (int i = 0; i < V; i++) {
		if(visited[i]) continue;
		if(a[from][i]) {
			go(i);
		}
	}
	return ;
}


int main(void) {
	a[1][2] = 1, a[2][1] = 1;
	a[1][3] = 1, a[3][1] = 1;
	a[3][4] = 1, a[4][3] = 1;
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			if (a[i][j] && visited[i] == 0) {
				go(i);
			}
		}
	}
}
