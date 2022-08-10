#include<bits/stdc++.h>
using namespace std;
int e, s, m;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> e >> s >> m;
	int ee = 1, ss = 1, mm = 1;
	int cnt = 1;
	while(1){
		if(ee >= 16) ee = 1;
		if(ss >= 29) ss = 1;
		if(mm >= 20) mm = 1;
		if(e == ee && s == ss && m == mm){
			cout << cnt << '\n';
			break;
		}
		ee++; ss++; mm++;
		cnt++;
	}
	return 0;
}
