#include<bits/stdc++.h>
using namespace std;
string board[1002];
int visited[1002][1002];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
queue<pair<int, int>> Q;
int n, m;
void bfs(int x, int y){
	Q.push({x,y});
	visited[x][y] = 1;
	while(!Q.empty()){
		auto cur = Q.front();
		Q.pop();
		for(int i = 0; i < 4; i++){
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if(nx >= n || nx < 0 || ny >= m || ny < 0) continue;
			if(visited[nx][ny] == 1 || board[nx][ny] == '1') continue;
			Q.push({nx,ny});
			visited[nx][ny] = 1;
		}
	}
}
int main(){
	int cnt = 0;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> board[i];
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(visited[i][j] == 0 && board[i][j] == '0'){
				bfs(i,j);
				cnt++;
			}
		}
	}
	cout << cnt << '\n';
	return 0;
}
