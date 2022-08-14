#include<bits/stdc++.h>
using namespace std;
int dx[8] = {1,1,0,-1,-1,-1,0,1};
int dy[8] = {0,1,1,1,0,-1,-1,-1};
int w, h, cnt;
int board[52][52];
int visited[52][52];
queue<pair<int,int>> Q;
void reset(){
	while(!Q.empty()) Q.pop();
	for(int i = 0; i < 52; i++){
		for(int j = 0; j < 52; j++){
			board[i][j] = 0;
			visited[i][j] = 0;
		}
	}
}
void bfs(int x, int y){
	Q.push({x,y});
	visited[x][y] = 1;
	while(!Q.empty()){
		auto cur = Q.front();
		Q.pop();
		for(int i = 0; i < 8; i++){
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if(nx < 0 || ny < 0 || nx >= h || ny >= w) continue;
			if(visited[nx][ny] == 1 || board[nx][ny] == 0) continue;
			Q.push({nx,ny});
			visited[nx][ny] = 1;
		}
	}
}
int main(){
	while(1){
		cnt = 0;
		reset();
		cin >> w >> h;
		if(w == 0 && h == 0) break;
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				cin >> board[i][j];
			}
		}
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
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
