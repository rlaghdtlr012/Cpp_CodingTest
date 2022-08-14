#include<bits/stdc++.h>
using namespace std;
int board[104][104];
int visited[104][104];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
queue<pair<int,int>> q;
int n, m, k, a, b, cnt;
void bfs(int x, int y){
	q.push({x,y});
	visited[x][y] = 1;
	while(!q.empty()){
		auto cur = q.front();
		q.pop();
		for(int i = 0; i < 4; i++){
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
			if(board[nx][ny] == 0 || visited[nx][ny] == 1) continue;
			q.push({nx, ny});
			visited[nx][ny] = 1;
			cnt++;
		}
	}
}
int main(){
	cin >> n >> m >> k;
	while(k--){
		cin >> a >> b;
		board[a-1][b-1] = 1;
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cnt = 1;
			if(board[i][j] == 1 && visited[i][j] == 0){
				bfs(i,j);
			}
			ans = max(ans, cnt);
		}
	}
	cout << ans;
	return 0;
}
