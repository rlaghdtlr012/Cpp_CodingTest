#include<bits/stdc++.h>
using namespace std;
int board[502][502];
bool visit[502][502];
int n = 7, m = 10;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int nx, ny;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	queue<pair<int,int>> Q;
	visit[0][0] = 1;
	Q.push({0,0});
	while(!Q.empty()){
		pair<int,int> cur = Q.front(); Q.pop();
		cout << '(' << cur.first << ", " << cur.second << ") ->";
		for(int i = 0; i < 4; i++){
			nx = cur.first + dx[i];
			ny = cur.second + dy[i];
			if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
			if(visit[nx][ny] == 1 || board[nx][ny] != 1) continue;
			visit[nx][ny] = 1;
			Q.push({nx,ny});
		}
	}
	return 0;
}
