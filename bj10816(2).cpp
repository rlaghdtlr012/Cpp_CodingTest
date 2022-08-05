#include<bits/stdc++.h>
using namespace std;
unordered_map <int, int> mmm;
int a[500002];
int n, m;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	int card;
	for(int i = 0; i < n; i++){
		cin >> card;
		mmm[card]++;
	}
	cin >> m;
	for(int i = 0; i < m; i++){
		int ret;
		cin >> ret;
		cout << mmm[ret] << " ";
	}
	return 0;
}
