#include<bits/stdc++.h>
using namespace std;
int n, a, b;
#define MAX 100001
vector<int> board[MAX];
int ans[MAX];
bool visited[MAX];
queue<int> q;
void bfs(){
	visited[1] = true;
	q.push(1);
	while(!q.empty()){
		int parent = q.front();
		q.pop();
		for(int i = 0; i < board[parent].size(); i++){
			int child = board[parent][i];
			if(!visited[child]){
				ans[child] = parent;
				visited[child] = true;
				q.push(child);
			}
		}
	}
}
int main(){
	cin >> n;
	for(int i = 0; i < n-1; i++){
		cin >> a >> b;
		board[a].push_back(b);
		board[b].push_back(a);
	}
	bfs();
	for(int i = 2; i <= n; i++){
		cout << ans[i] << '\n';
	}
	return 0;
}

