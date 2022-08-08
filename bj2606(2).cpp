#include<bits/stdc++.h>
using namespace std;
int board[102][102];
int visited[102];
int n, num, a, b;
queue<int> q;
int cnt;
void bfs(int x){
	q.push(x);
	visited[x] = 1;
	while(!q.empty()){
		x = q.front();
		q.pop();
		for(auto i = 1; i <= num; i++){
			if(board[x][i] == 1 && visited[i] == 0){
				q.push(i);
				visited[i] = 1;
				cnt++;
			}
		}
	}
}
int main(){
	cin >> num;
	cin >> n;
	while(n--){
		cin >> a >> b;
		board[a][b] = 1;
		board[b][a] = 1;	
		}
	bfs(1);
	cout << cnt;
	return 0;
}

