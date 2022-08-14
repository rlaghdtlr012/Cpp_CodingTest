#include<bits/stdc++.h>
using namespace std;
int board[1004][1004];
int visited[1004];
queue<int> q;
int n, m, u, v, cnt;

void bfs(int x){
	q.push(x);
	visited[x] = 1;
	while(!q.empty()){
		auto cur = q.front();
		q.pop();
		for(int i = 1; i <= n; i++){
			if(board[cur][i] == 1 && visited[i] == 0){
				visited[i] = 1;
				q.push(i);
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		cin >> u >> v;
		board[u][v] = 1;
		board[v][u] = 1;
	}
	for(int i = 1; i <= n; i++){
		if(visited[i] == 0){
			bfs(i);
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
