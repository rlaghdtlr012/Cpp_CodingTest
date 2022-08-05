#include<bits/stdc++.h>
using namespace std;
int dist[1002][1002];
int board[1002][1002];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int n, m;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> m >> n;
	queue<pair<int,int>> Q;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> board[i][j];
			if(board[i][j] == 0) dist[i][j] = -1;
			if(board[i][j] == 1) Q.push({i,j}); 
		}
	}
	while(!Q.empty()){
		auto cur = Q.front();
		Q.pop();
		for(int i = 0; i < 4; i++){
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
			if(dist[nx][ny] >= 0) continue;
			dist[nx][ny] = dist[cur.first][cur.second] + 1;
			Q.push({nx,ny});
		}
	}
	int distance = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(dist[i][j] == -1){
				cout << -1 << '\n';
				return 0;
			}
			distance = max(distance, dist[i][j]);
		}
	}
	cout << distance <<'\n';
	return 0;
}
