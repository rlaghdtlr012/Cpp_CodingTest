#include<bits/stdc++.h>
using namespace std;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int board[102][102];
int visited[102][102];
int maxHeight, n, cnt;
int minHeight = 101;
queue<pair<int,int>> Q;
int result = 0;
void reset(){
	while(!Q.empty()) Q.pop();
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			visited[i][j] = 0;
		}
	}
}
void bfs(int x, int y, int z){
	Q.push({x,y});
	while(!Q.empty()){
		auto cur = Q.front();
		Q.pop();
		visited[cur.first][cur.second] = 1;
		for(int i = 0; i < 4; i++){
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if(nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
			if(visited[nx][ny] == 1 || board[nx][ny] <= z) continue;
			visited[nx][ny] = 1;
			Q.push({nx,ny});
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> board[i][j];
			maxHeight = max(maxHeight, board[i][j]);
			//minHeight = min(minHeight, board[i][j]);
		}
	}
	for(int k = 0; k <= maxHeight; k++){
		cnt = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(board[i][j] > k && visited[i][j] == 0){
					bfs(i,j,k);
					cnt++;
				}
			}
		}
		reset();
		result = max(result, cnt);
	}
	cout << result << '\n';
	
	return 0;
}
