#include<bits/stdc++.h>
using namespace std;
int board[52][52];
int visited[52][52];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int tc, m, n, place, x, y, cnt;
vector<int> result;
queue<pair<int,int>> Q;
void reset(){
	while(!Q.empty()) Q.pop();
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			visited[i][j] = 0;
			board[i][j] = 0;
		}
	}
}
void bfs(int x, int y){
	Q.push({x,y});
	while(!Q.empty()){
		auto cur = Q.front();
		Q.pop();
		visited[cur.first][cur.second] = 1;
		for(int i = 0; i < n; i++){
				int nx = cur.first + dx[i];
				int ny = cur.second + dy[i];
				if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
				if(visited[nx][ny] == 1 || board[nx][ny] == 0) continue;
				Q.push({nx,ny});
				visited[nx][ny] = 1;
		}			
	}
}
int main(){
	cin >> tc;
	while(tc--){
		reset();
		cnt = 0;
		cin >> m >> n >> place;
		while(place--){
			cin >> y >> x;
			board[x][y] = 1;
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(board[i][j] == 1 && visited[i][j] == 0){
					bfs(i,j);
					cnt++;
				}	
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
