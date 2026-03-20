#include <bits/stdc++.h>

using namespace std;

int b[100][100];
int vis[100][100];

int m, n, k;
int res;

int by[] = {1, 0, -1, 0};
int bx[] = {0, 1, 0, -1};

void dfs(int y, int x, int &cnt) {
	cnt++;
	vis[y][x] = 1;

	for (int i = 0; i < 4; i++) {
		int ny = y + by[i];
		int nx = x + bx[i];
		if (vis[ny][nx] || b[ny][nx]) continue;
		if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
		// cout << ny << " " << nx << '\n';
		dfs(ny, nx, cnt);
	}
}
vector<int> vec;
int main(void) {
	cin >> m >> n >> k;

	while (k--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = y1; i < y2; i++) {
			for (int j = x1; j < x2; j++) {
				b[i][j] = 1;
			}
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (!vis[i][j] && !b[i][j]) {
				res++;
				int cnt = 0;
				dfs(i, j, cnt);
				vec.push_back(cnt);
			}
		}
	}
	sort(vec.begin(), vec.end());
	cout << res << '\n';
	for (int i : vec)
		cout << i << ' ';
	return 0;

}
