#include <stdio.h>

int N;
int cnt;

void solve(int n) {
    int a = 0;
    int i = n;
    while (i > 0) {
        cnt++;
        a += i;
        i /= 2;
    }
    printf("%d\n", a);
}

int main(void) {
    if (scanf("%d", &N) != 1) {
        return 1;
    }
    solve(N);
    printf("cnt : %d\n", cnt);
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int N;
// int cnt;
// void solve(int n) {
// 	int a = 0;
// 	int i = n;
// 	while (i > 0) {
// 		cnt++;
// 		a += i;
// 		i /= 2;
// 	}
// 	cout << a << '\n';
// }

// int main(void) {
// 	cin >> N;
// 	solve(N);
// 	cout << "cnt : " << cnt << '\n';
// }
