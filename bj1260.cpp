#include<bits/stdc++.h>
using namespace std;
int n, m, v;
int x, y;
bool visited[1001];
int graph[1001][1001];
stack<int> s;
queue<int> q;
void reset(){
	for(int i = 1; i <= n; i++){
		visited[i] = false;
	}
}
void bfs(int v){
	q.push(v);
	visited[v] = true;
	cout << v << ' ';
	while(!q.empty()){
		v = q.front();
		q.pop();
		for(int i = 1; i <= n; i++){
			if(graph[v][i] == 1 && visited[i] == false){
				q.push(i);
				visited[i] = true;
				cout << i << ' ';
			}
		}
	}
}
void dfs(int v){
	visited[v] = true;
	cout << v << ' ';
	for(int i = 1; i <= n; i++){
		if(graph[v][i] == 1 && visited[i] == false){
			dfs(i);
		}
	}
}
int main(){
	cin >> n >> m >> v;
	for(int i = 0; i < m; i++){
		cin >> x >> y;
		graph[x][y] = 1;
		graph[y][x] = 1;
	}
	dfs(v);
	cout << '\n';
	reset();
	bfs(v);
	return 0;
}
