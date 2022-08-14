#include<bits/stdc++.h>
using namespace std;
int a[51];
int b[51];
int ret;
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++) cin >> b[i];
	sort(a,a+n);
	sort(b,b+n,greater<>());
	for(int i = 0; i < n; i++){
		ret += a[i] * b[i];
	}
	cout << ret;
	return 0;
}

