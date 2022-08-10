#include<bits/stdc++.h>
using namespace std;
int tc, n, m;
int a[1000005];
int b[1000005];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> tc;
	while(tc--){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		cin >> m;
		for(int i = 0; i < m; i++){
			cin >> b[i];
		}
		for(int i = 0; i < m; i++){
			cout << binary_search(a,a+n,b[i]) << '\n';
		}
	}
	return 0;
}
