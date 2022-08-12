#include<bits/stdc++.h>
using namespace std;
char board[102][102];
int visited[102][102];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
queue<pair<int,int>> q;
int n, m, cnt, blueteam, whiteteam;
void bfsW(int x, int y){
	q.push({x,y});
	visited[x][y] = 1;
	while(!q.empty()){
		auto cur = q.front();
		q.pop();
		for(int i = 0; i < 4; i++){
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if(nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
			if(board[nx][ny] == 'B' || visited[nx][ny] == 1) continue;
			visited[nx][ny] = 1;
			q.push({nx,ny});
			cnt++;
		}
	}
}
void bfsB(int x, int y){
	q.push({x,y});
	visited[x][y] = 1;
	while(!q.empty()){
		auto cur = q.front();
		q.pop();
		for(int i = 0; i < 4; i++){
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if(nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
			if(board[nx][ny] == 'W' || visited[nx][ny] == 1) continue;
			visited[nx][ny] = 1;
			q.push({nx,ny});
			cnt++;
		}
	}
}
int main(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		cin >> board[i];
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cnt = 1;
			if(board[i][j] == 'W' && visited[i][j] == 0){
				bfsW(i,j);
				whiteteam += (cnt*cnt);
			}
		}
	}
	memset(visited, 0, sizeof(visited));
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cnt = 1;
			if(board[i][j] == 'B' && visited[i][j] == 0){
				bfsB(i,j);
				blueteam += (cnt*cnt);
			}
		}
	}
	cout << whiteteam << " " << blueteam;
	return 0;
}
