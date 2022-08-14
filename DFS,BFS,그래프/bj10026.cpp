#include<bits/stdc++.h>
using namespace std;
char board[102][102];
char board1[102][102]; 
int visited[102][102];
int n;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void bfsR(int x, int y){
	queue<pair<int,int>> q;
	q.push({x,y});
	visited[x][y] = 1;
	while(!q.empty()){
		auto cur = q.front();
		q.pop();
		for(int i = 0; i < 4; i++){
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
			if(visited[nx][ny] == 1 || board1[nx][ny] != board1[cur.first][cur.second]) continue;
			visited[nx][ny] = 1;
			q.push({nx,ny});
		}
	}
}
void bfs(int x, int y){
	queue<pair<int,int>> q;
	q.push({x,y});
	visited[x][y] = 1;
	while(!q.empty()){
		auto cur = q.front();
		q.pop();
		for(int i = 0; i < 4; i++){
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
			if(visited[nx][ny] == 1 || board[nx][ny] != board[cur.first][cur.second]) continue;
			visited[nx][ny] = 1;
			q.push({nx,ny});
		}
	}
}
int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> board[i];
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(board[i][j] == 'G') board1[i][j] = 'R';
			else board1[i][j] = board[i][j];
		}
	}
	int cnt = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(visited[i][j] == 0){
				bfs(i,j);
				cnt++;
			}
		}
	}
	cout << cnt << " ";
	memset(visited, 0, sizeof(visited));
	cnt = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(visited[i][j] == 0){
				bfsR(i,j);
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}
