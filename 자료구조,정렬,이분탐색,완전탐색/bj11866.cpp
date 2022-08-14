#include<bits/stdc++.h>
using namespace std;
int n, k;
queue<int> q;
int main(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		q.push(i);
	}
	cout << '<';
	while(q.size() > 1){
		for(int i = 1; i < k; i++){
			int temp = q.front();
			q.push(temp);
			q.pop();
		}
		int temp2 = q.front();
		cout << temp2 << ", ";
		q.pop();
	}
	cout << q.front() <<'>';
	return 0;
}
