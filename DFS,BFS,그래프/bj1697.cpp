#include<bits/stdc++.h>
using namespace std;
int board[100002];
int n, k, nx;
int cur;
int dx[3] = {1,-1,cur};
queue<int> Q;
void bfs(int x, int k){
	Q.push(x);
	while(board[k] == -1){
		cur = Q.front();
		Q.pop();
		for(int i : {cur-1, cur+1, 2*cur}){
			if(i < 0 || i >= 100001) continue;
			if(board[i] != -1) continue;
			board[i] = board[cur] + 1;
			Q.push(i);
		}
	}
	cout << board[k];
}
int main(){
	cin >> n >> k;
	fill(board, board+100002, -1);
	board[n] = 0;
	for(int i = 0; i < 100002; i++){
		if(board[i] == 0){
			bfs(i, k);
			break;
		}
	}
	return 0;
}
