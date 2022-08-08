#include<bits/stdc++.h>
using namespace std;
int board[1005][1005];
int visited[1005];
int n, m, a, b, cnt;
queue<int> q;

void bfs(int x){
	q.push(x);
	visited[x] = 1;
	while(!q.empty()){
		int cur = q.front();
		q.pop();
		for(int i = 1; i <= n; i++){
			if(board[cur][i] == 1 && visited[i] == 0){
				q.push(i);
				visited[i] = 1;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	while(m--){
		cin >> a >> b;
		board[b][a] = 1;
		board[a][b] = 1;
	}
	for(int i = 1; i<= n; i++){
		if(visited[i] == 0){
			bfs(i);
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
