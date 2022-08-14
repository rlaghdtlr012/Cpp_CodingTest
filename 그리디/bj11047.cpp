#include<bits/stdc++.h>
using namespace std;
int n,k, coin, coinSum;
int a[12];
int main(){
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	while(k > 0){
		for(int i = n-1; i >= 0; i--){
			if((k/a[i]) >= 1){
				coin = (k/a[i]);
				k = k - (coin*a[i]);
				coinSum += coin;
			}
		}
	}
	cout << coinSum;
	return 0;
}
