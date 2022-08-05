#include<bits/stdc++.h>
using namespace std;
int dx[8] = {2,2,1,1,-1,-1,-2,-2};
int dy[8] = {1,-1,2,-2,2,-2,-1,1};
int board[302][302];
int visited[302][302];
int tc, l, a, b, c, d;
queue<pair<int,int>> Q;
void reset(){
	while(!Q.empty()) Q.pop();
	for(int i = 0; i < 302; i++) {
		for (int j = 0; j < 302; j++) {
			visited[i][j] = 0;
			board[i][j] = 0;
		}
	}
}
void bfs(int x, int y){
	Q.push({x,y});
	visited[x][y] = 1;
	while(!Q.empty()){
		auto cur = Q.front();
		Q.pop();
		if(cur.first == c && cur.second == d){
			cout << board[cur.first][cur.second] << '\n';
			while(!Q.empty()){
				Q.pop();	
			}
			break;
		}
		for(int i = 0; i < 8; i++){
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if(nx < 0 || ny < 0 || nx >= l || ny >= l) continue;
			if(visited[nx][ny] == 1) continue;
			Q.push({nx,ny});
			visited[nx][ny] = 1;
			board[nx][ny] = board[cur.first][cur.second] + 1;
		}
	}
}
int main(){
	cin >> tc;
	while(tc--){
		cin >> l;
		cin >> a >> b;
		cin >> c >> d;
		bfs(a, b);
		reset();
	}
	return 0;
} 
