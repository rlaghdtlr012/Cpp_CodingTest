#include<bits/stdc++.h>
using namespace std;
bool visited[101] = {0,};
int num, pairNum;
int cnt = 0;
queue<int> Q;
int board[101][101];
void bfs(int y){
	Q.push(y);
	visited[y] = true;
	while(!Q.empty()){
		y = Q.front();
		Q.pop();
		
		for(auto i = 1; i <= num; i++){
			if(board[y][i] == 1 && visited[i] == 0){
				Q.push(i);
				visited[i] = true;
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
		int x,y;
		cin >> x >> y;
		board[x][y] = 1;
		board[y][x] = 1;
	}
	bfs(1);
	cout << cnt;
	return 0;
}
