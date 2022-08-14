#include<bits/stdc++.h>
using namespace std;
int tc, a, b, n, m;
int board[1002][1002];
int visited[1002];
queue<int> q;

void reset(){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			board[i][j] = 0;
		}
	}
}

void bfs(int x){
	q.push(x);
	visited[x] = 1;
	while(!q.empty()){
		auto cur = q.front();
		q.pop();
		for(int i = 1; i<= n; i++){
			if(board[cur][i] == 1 && visited[i] == 0){
				visited[i] = visited[cur] + 1;
				q.push(i);
			}
		}
	}
}

int main(){
	cin >> tc;
	while(tc--){
		cin >> n >> m;
		for(int i = 0; i < m; i++){
			cin >> a >> b;
			board[a][b] = 1;
			board[b][a] = 1;
		}
		int ans = 0;
		for(int i = 1; i <= n; i++){
			bfs(i);
			for(int j = 1; j <= n; j++){
				ans = max(visited[j], ans);
			}
			memset(visited, 0, sizeof(visited));
		}
		cout << ans << '\n';
		reset();
	}
	return 0;
}
