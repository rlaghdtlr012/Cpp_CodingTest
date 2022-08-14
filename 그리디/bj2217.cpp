#include<bits/stdc++.h>
using namespace std;
int n, ans, ret;
int s[100005];
int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s[i];
	}
	sort(s, s+n, greater<>());
	for(int i = 1; i <= n; i++){
		ans = s[i-1] * i;
		ret = max(ret, ans);
	}
	cout << ret;
	return 0;
}

