#include<bits/stdc++.h>
using namespace std;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
string board[102];
int visited[102][102];
queue<pair<int,int>> q;
int n, m;
void bfs(int x, int y){
	q.push({x,y});
	visited[x][y] = 1;
	while(!q.empty()){
		auto cur = q.front();
		q.pop();
		for(int i = 0; i < 4; i++){
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if(board[nx][ny] == '0' || visited[nx][ny] != 0) continue;
			visited[nx][ny] = visited[cur.first][cur.second]+1;
			q.push({nx,ny});
		}
	}
}
int main(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> board[i];
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(board[i][j] == '1' && visited[i][j] == 0){
				bfs(i,j);
			}
		}
	}
	cout << visited[n-1][m-1];
	return 0;
}
