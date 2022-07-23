#include<bits/stdc++.h>
using namespace std;
int nx, ny;
int x, y;
int dist[102][102];
string board[102];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> x >> y;
	for(int i = 0; i < x; i++){
		cin >> board[i];
	}	
	for(int i = 0; i < x; i++) fill(dist[i], dist[i]+y, -1);
	queue<pair<int,int>> Q;
	Q.push({0,0});
	dist[0][0] = 0;
	while(!Q.empty()){
		pair<int,int> cur = Q.front(); Q.pop();
		for(int i = 0; i < 4; i++){
			nx = cur.first + dx[i];
			ny = cur.second + dy[i];
			if(nx < 0 || nx >=  x || ny < 0 || ny >= y) continue;
			if(dist[nx][ny] >= 0 || board[nx][ny] == '0') continue;
			dist[nx][ny] = dist[cur.first][cur.second]+1;
			Q.push({nx,ny});
		}
	}
	cout << dist[x-1][y-1] + 1;
	return 0;
}
