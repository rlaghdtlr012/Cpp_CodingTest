#include<bits/stdc++.h>
using namespace std;
int n;
int house[1005][3];
int dk[1005][3];
int main(){
	cin >> n;
	for(int i = 0; i < n; i++) cin >> house[i][0] >> house[i][1] >> house[i][2];
	dk[0][0] = house[0][0];
	dk[0][1] = house[0][1];
	dk[0][2] = house[0][2];
	for(int i = 1; i < n; i++){
		dk[i][0] = min(dk[i-1][1],dk[i-1][2]) + house[i][0];
		dk[i][1] = min(dk[i-1][0],dk[i-1][2]) + house[i][1];
		dk[i][2] = min(dk[i-1][0],dk[i-1][1]) + house[i][2];
	}
	int ret;
	ret = min({dk[n-1][0],dk[n-1][1],dk[n-1][2]});
	cout << ret;
	return 0;
}
