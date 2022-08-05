#include<bits/stdc++.h>
using namespace std;
int a[500005];
int b[500005];
int ret[500005];
int n, m;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cin >> m;
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(b[i] == a[j]) ret[i]++; 
		}
	}
	for(int i = 0; i < m; i++){
		cout << ret[i] << ' ';
	}
	return 0;
}
