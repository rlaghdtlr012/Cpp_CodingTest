#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int b[1000005];
int c[2000005];
int aidx, bidx, n, m;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < m; i++) cin >> b[i];
	for(int i = 0; i < n+m; i++){
		if(bidx == m) c[i] = a[aidx++];
		else if(aidx == n) c[i] = b[bidx++];
		else if(a[aidx] <= b[bidx]) c[i] = a[aidx++];
		else c[i] = b[bidx++];
	}
	for(int i = 0; i < m+n; i++){
		cout << c[i] << ' ';
	}
	return 0;
}
