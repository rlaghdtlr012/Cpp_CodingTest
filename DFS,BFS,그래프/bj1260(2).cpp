#include<bits/stdc++.h>
using namespace std;
queue<int> q;
stack<int> s;
int board[1004][1004];
int visited[1004];
int n, m, v, a, b;

void dfs(int x){
	visited[x] = 1;
	cout << x << " ";
	for(int i = 1; i <= n; i++){
		if(board[x][i] == 1 && visited[i] == 0){
			dfs(i);
		}
	}
}

void bfs(int x){
	q.push(x);
	visited[x] = 1;
	cout << x << " ";
	while(!q.empty()){
		auto cur = q.front();
		q.pop();
		for(int i = 1; i <= n; i++){
			if(board[cur][i] == 1 && visited[i] == 0){
				visited[i] = 1;
				q.push(i);
				cout << i << " ";
			}
		}
	}
}
int main(){
	cin >> n >> m >> v;
	while(m--){
		cin >> a >> b;
		board[a][b] = 1;
		board[b][a] = 1;
	}
	dfs(v);
	cout << '\n';
	memset(visited, 0, sizeof(visited));
	bfs(v);
	cout << '\n';
	return 0;
}
