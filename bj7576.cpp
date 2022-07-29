#include<bits/stdc++.h>
using namespace std;
int board[1002][1002];
int dist[1002][1002];
int n, m;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int main(){
	cin >> n >> m;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	queue<pair<int,int>> Q;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> board[i][j];
			if(board[i][j] == 1) Q.push({i,j});
			if(board[i][j] == 0) dist[i][j] = -1;
		}
	}
	while(!Q.empty()){
		auto cur = Q.front();
		Q.pop();
		for(int i = 0; i < 4; i++){
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if(nx < 0 || ny < 0 || nx >= m || ny >= n) continue;
			if(dist[nx][ny] >= 0) continue;
			dist[nx][ny] = dist[cur.first][cur.second]+1;
			Q.push({nx,ny});
		}
	}
	int ans = 0;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(dist[i][j] == -1){
				cout << -1 << '\n';
				return 0;
			}
			ans = max(ans, dist[i][j]);
		}
	}
	cout << ans << '\n';
	return 0;
}
