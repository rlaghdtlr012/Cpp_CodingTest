#include<bits/stdc++.h>
using namespace std;
int board[1005][1005];
int visited[1005][1005];
queue<pair<int,int>> q;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int houseX, houseY, festivalX, festivalY, beer, tc, market, a, b;

void bfs(int x, int y){
	beer = 2000;
	q.push({x,y});
	visited[x][y] = 1;
	while(!q.empty()){
		auto cur = q.front();
		q.pop();
		for(int i = 0; i < 4; i++){
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if(nx < 0 || ny < 0 || nx > festivalX || ny > festivalY) continue;
			if(visited[nx][ny] != 0) continue;
			visited[nx][ny] = beer-50;
			q.push({nx,ny});
			if(visited[nx][ny] < 0) cout << "sad\n"; return;
			if(board[nx][ny] == 3) cout << "happy\n";
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> tc;
	while(tc--){
		cin >> market;
		for(int i = 0; i < market+2; i++){
			cin >> a >> b;
			if(i == 0){
				board[a][b] = 1;
				houseX = a;
				houseY = b;
			}
			else if(i == market+1){
				board[a][b] = 3;
				festivalX = a;
				festivalY = b;
			}
			else{
				board[a][b] = 2;
			}
		}
		bfs(houseX,houseY);
		memset(visited, 0, sizeof(visited));
	}
	return 0;
}

