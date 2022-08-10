#include<bits/stdc++.h>
using namespace std;
int board[502][502];
int visited[502];
queue<int> q;
int n, m, a, b, cnt;

void bfs(int x){
	q.push(x);
	visited[x] = 1;
	while(!q.empty()){
		auto cur = q.front();
		q.pop();
		if(cur != 1){
			for(int i = 2; i <= n; i++){
				if(board[cur][i] == 1 && visited[i] == 0){
					visited[i] = 1;
					cnt++;
					continue;
				}
			}
		}
		else{
			for(int i = 1; i <= n; i++){
				if(board[1][i] == 1 && visited[i] == 0){
					q.push(i);
					visited[i] = 1;
					cnt++;
				}
			}
		}
	}
}

int main(){
	cin >> n;
	cin >> m;
	for(int i = 1; i <= m; i++){
		cin >> a >> b;
		board[a][b] = 1;
		board[b][a] = 1;
	}
	bfs(1);
	cout << cnt;
	return 0;
}
