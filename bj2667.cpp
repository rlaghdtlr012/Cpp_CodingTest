#include<bits/stdc++.h>
using namespace std;
int n, cnt = 0;
string board[502];
bool visited[502][502];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
vector<int> result;
queue<pair<int,int>> Q;
int nx, ny;
void bfs(int x, int y){
	Q.push({x,y});
	visited[x][y] = true;
	cnt++;
	while(!Q.empty()){
		pair<int, int> cur = Q.front();
		Q.pop();
		for(int i = 0; i < 4; i++){
			nx = cur.first + dx[i];
			ny = cur.second + dy[i];
			if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
			if(visited[nx][ny] == true || board[nx][ny] == '0') continue;
			Q.push({nx,ny});
			visited[nx][ny] = true;
			cnt++;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for(int i = 0; i < n; i++) cin >> board[i];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(board[i][j] == '1' && visited[i][j] == false){
				cnt = 0;
				bfs(i,j);
				result.push_back(cnt);
			}
		}
	}
	sort(result.begin(), result.end());
	
	cout << result.size() << '\n';
	for(int i = 0; i < result.size(); i++){
		cout << result[i] << '\n';
	}
	return 0;
}
