#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, k;
	cin >> n >> k;
	int sol = 0;
	for(int i = 1; i <= k; i++){
		int ret = n*i;
		string s = to_string(ret);
		reverse(s.begin(), s.end());
		int d = atoi(s.c_str());
		sol = max(d, sol);
	}
	cout << sol;
	return 0;
}
