#include <bits/stdc++.h>
using namespace std;

const int V = 10;
vector<int> adj[V];

vector<int> visited = vector<int>(V);

void go(int from) {
	visited[from] = 1;
	cout << from << endl;
	for (int there : adj[from]) {
			if (!visited[there]) {
				go(there);
			}
	}
}

int main(void) {
	adj[1].push_back(2);
	adj[1].push_back(3);

	adj[2].push_back(1);

	adj[3].push_back(1);
	adj[3].push_back(4);

	adj[4].push_back(3);


	for (int i = 0; i < V; i++) {
		if (!visited[i] && adj[i].size()) {
			go(i);
		}
	}
}

// int main(void) {
// 	adj[0].push_back(1);
// 	adj[0].push_back(2);
// 	adj[0].push_back(3);

// 	adj[1].push_back(0);
// 	adj[1].push_back(2);

// 	adj[2].push_back(0);
// 	adj[2].push_back(1);

// 	adj[3].push_back(0);


// 	for (int i = 0; i < 4; i++) {
// 		cout << i << " :: ";
// 		for (int there : adj[i]) {
// 			cout << there << " ";
// 		}
// 		cout << endl;
// 	}

// }

