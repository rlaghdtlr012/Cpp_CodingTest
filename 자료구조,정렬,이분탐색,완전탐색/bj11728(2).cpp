#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000000
int a[1000005];
int b[1000005];
int c[2000005];
int aidx, bidx, n, m;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	std::fill_n(a,1000005,MAX);
	std::fill_n(b,1000005,MAX);
	cin >> n >> m;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < m; i++) cin >> b[i];
	for(int i = 0; i < n+m; i++){
		if(a[aidx] > b[bidx]){
			c[i] = b[bidx]; 
			bidx++;	
		}
		else if(a[aidx] < b[bidx]){
			c[i] = a[aidx]; 
			aidx++;	
		}
		else{
			c[i] = a[aidx];
			c[i+1] = b[bidx];
			i++;
			aidx++;
			bidx++;
		}
	}
	for(int i = 0; i < m+n; i++){
		cout << c[i] << ' ';
	}
	return 0;
}
