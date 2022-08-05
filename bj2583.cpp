#include<bits/stdc++.h>
using namespace std;
int board[102][102];
int visited[102][102];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int m, n, k;
int a, b, c, d, cnt, cnt2;
vector<int> v;
queue<pair<int, int>> Q;
void bfs(int x, int y){
	Q.push({x, y});
	visited[x][y] = 1;
	while(!Q.empty()){
		auto cur = Q.front();
		Q.pop();
		for(int i = 0; i < 4; i++){
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if(nx < 0 || ny < 0 || ny >= m || nx >= n) continue;
			if(visited[nx][ny] == 1 || board[nx][ny] == 1) continue;
			visited[nx][ny] = 1;
			Q.push({nx,ny});
			cnt++;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> m >> n >> k;
	for(int i = 0; i < k; i++){
		cin >> a >> b >> c >> d;
		for(int j = a; j < c; j++){
			for(int z = b; z < d; z++){
				board[j][z] = 1;
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(board[i][j] == 0 && visited[i][j] == 0){
				cnt = 1;
				bfs(i,j);
				cnt2++;
				v.push_back(cnt);
			}
		}
	}
	cout << cnt2 << '\n';
	sort(v.begin(),v.end());
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << ' ';
	}
	return 0;
}
