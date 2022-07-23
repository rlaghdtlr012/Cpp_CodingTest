#include<bits/stdc++.h>
using namespace std;
int days, sum ,term, temp;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int ret = -10000004;
	cin >> days >> term;
	int temperature[days];
	for(int i = 1; i <= days; i++){
		cin >> temp;
		temperature[i] = temperature[i-1] + temp;
	}
	for(int i = term; i <= days; i++){
		ret = max(ret, temperature[i] - temperature[i-term]);
	}
	cout << ret; 
	return 0;
}
