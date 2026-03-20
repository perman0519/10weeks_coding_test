#include <bits/stdc++.h>

using namespace std;

int b[50][50];
int vis[50][50];

int by[] = {1, 0, -1, 0};
int bx[] = {0, -1, 0, 1};

int t, m, n, k;


void bfs(int y, int x) {
	vis[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		int ny = y + by[i];
		int nx = x + bx[i];
		if (vis[ny][nx] || !b[ny][nx]) continue;
		if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
		bfs(ny, nx);
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while (t--) {
		memset(b, 0, sizeof(b));
		memset(vis, 0, sizeof(vis));
		cin >> m >> n >> k;
		int x, y;
		int res = 0;
		while (k--) {
			cin >> x >> y;
			b[y][x] = 1;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (!vis[i][j] && b[i][j]) {
					res++;
					bfs(i, j);
				}
			}
		}
		cout << res << '\n';

	}
}
