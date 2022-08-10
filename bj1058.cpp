#include<bits/stdc++.h>
using namespace std;
char board[52][52];
int visited[52];
queue<int> q;
int n;
void reset(){
	for(int i = 0; i < n; i++){
		visited[i] = 0;
	}
}
void bfs(int x){
	q.push(x);
	visited[x] = 1;
	while(!q.empty()){
		auto cur = q.front();
		q.pop();
		for(int i = 0; i < n; i++){
			if(board[cur][i] == 'Y' && visited[i] == 0){
				visited[i] = visited[cur] + 1;
				q.push(i);
			}
		}
	}
}
int main(){
	cin >> n;
	string s;
	for(int i = 0; i < n; i++){
		cin >> s;
		for(int j = 0; j < s.size(); j++){
			board[i][j] = s[j];
		}
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		int cnt = 0;
		bfs(i);
		for(int j = 0; j < n; j++){
			if(visited[j] == 2 || visited[j] == 3){
				cnt++;
			}
		}
		ans = max(cnt, ans);
		reset();
	}
	cout << ans << '\n';
	return 0;
} 
