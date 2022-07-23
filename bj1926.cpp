#include<bits/stdc++.h>
using namespace std;
int nx, ny;
int x, y;
int board[502][502];
bool visited[502][502];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> x >> y;
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			cin >> board[i][j];
		}
	}	
	int mx = 0;
	int num = 0;
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			if(board[i][j] == 0 || visited[i][j] == 1) continue;
			num++;
			queue<pair<int,int>> Q;
			visited[i][j] = 1;
			Q.push({i,j});
			int area = 0;
			while(!Q.empty()){
				area++;
				pair<int,int> cur = Q.front(); Q.pop();
				for(int k = 0; k< 4; k++){
					nx = cur.first + dx[k];
					ny = cur.second + dy[k];
					if(nx < 0 || nx >= x || ny < 0 || ny >= y) continue;
					if(visited[nx][ny] || board[nx][ny] != 1) continue;
					visited[nx][ny] = 1;
					Q.push({nx,ny});
				}
			}
		mx = max(mx, area);
		}
	}
	cout << num << '\n' << mx;
	return 0;
}
