#include <bits/stdc++.h>

using namespace std;

int n, m;

int ma[100][100];
int visited[100][100];

int by[] = {1, 0, -1, 0};
int bx[] = {0, 1, 0, -1};

void bfs(int y, int x) {
	visited[y][x] = 1;
	queue<pair<int, int>> q;
	q.push({y, x});
	while(!q.empty()) {
		tie(y, x) = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int ny = y + by[i];
			int nx = x + bx[i];
			if (visited[ny][nx]) continue;
			if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
			if (!ma[ny][nx]) continue;
			visited[ny][nx] = visited[y][x] + 1;
			q.push({ny, nx});
			// cout << ny << " " << nx << '\n';
		}
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		for (int j = 0; j < m; j++) {
			ma[i][j] = str[j] - '0';
		}
	}
	bfs(0, 0);
	cout << visited[n-1][m-1];
}

