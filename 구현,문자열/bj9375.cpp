#include<bits/stdc++.h>
using namespace std;
int tc, n;
string a, b;
int main(){
	cin >> tc;
	for(int i = 0; i < tc; i++){
		cin >> n;
		map<string, int> _map1;
		for(int j = 0; j < n; j++){
		cin >> a >> b;
		_map1[b] += 1;
		}
		long long result = 1;
		for(auto a : _map1){
			result *= ((long long)a.second+1);
		}
		result--;
		cout << result << "\n";
	}
	return 0;
}
