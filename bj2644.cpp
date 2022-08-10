#include<bits/stdc++.h>
using namespace std;
int board[102][102];
int visited[102];
int n, m, a, b, x, y;
queue<int> q;
void bfs(int k){
	q.push(k);
	visited[k] = 1;
	while(!q.empty()){
		auto cur = q.front();
		q.pop();
		for(int i = 1; i <= n; i++){
			if(board[cur][i] == 1 && visited[i] == 0){
				q.push(i);
				visited[i] = visited[cur] + 1;
			}
		}
	}
}
int main(){
	cin >> n;
	cin >> a >> b;
	cin >> m;
	while(m--){
		cin >> x >> y;
		board[x][y] = 1;
		board[y][x] = 1;
	}
	bfs(a);
	if(visited[b] == 0){
		cout << "-1\n";
	}
	else{
		cout << visited[b] - 1<< '\n';
	}
	return 0;
}
