#include <bits/stdc++.h>

using namespace std;

int by[] = {1, 0, -1, 0};
int bx[] = {0, 1, 0, -1};

int b[100][100];
int vis[100][100];
int n;
int max_i;
int res;

void bfs(int y, int x) {
	vis[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		int ny = y + by[i];
		int nx = x + bx[i];
		if (vis[ny][nx] || b[ny][nx] <= max_i) continue;
		if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
		bfs(ny, nx);
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> b[i][j];
			max_i = max(max_i, b[i][j]);
		}
	}

	while(max_i-- > -1) {
		int count = 0;
		memset(vis, 0, sizeof(vis));
		for(int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (!vis[i][j] && b[i][j] > max_i) {
					count++;
					bfs(i, j);
				}
			}
		}
		res = max(res, count);
	}

	cout << res;
	return 0;
}
