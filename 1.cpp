#include<bits/stdc++.h>
using namespace std;
bool visited[102];
int cnt, n, m, num, pairNum;
queue<int> Q;
int board[502][502];
void bfs(int y){
	Q.push(y);
	visited[y] = true;
	while(!Q.empty()){
		y = Q.front();
		Q.pop();
		
		for(auto i = 1; i <= n; i++){
			if(board[n][m] == 1 && visited[i] == false){
				Q.push(i);
				visited[i] == true;
				cnt++;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> num;
	cin >> pairNum;
	for(int i = 0; i < pairNum; i++){
		cin >> n >> m;
		board[n][m] = 1;
		board[m][n] = 1;
	}
	bfs(1);
	return 0;
}
