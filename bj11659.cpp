#include<bits/stdc++.h>
using namespace std;
int n, m, i, j;
int num[100004], d[100004];
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		cin >> num[i];
		d[i] = d[i-1] + num[i];
	} 
	while(m--){
		cin >> i >> j;
		cout << d[j] - d[i-1] << '\n'; 
	}
	return 0;
}
