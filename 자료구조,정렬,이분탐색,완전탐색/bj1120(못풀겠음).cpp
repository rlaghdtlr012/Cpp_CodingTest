#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string a, b;
	int ret = 50;
	int cnt;
	cin >> a >> b;
	for(int leng = 0; leng <= b.length() - a.length(); leng++){
		cnt = 0;
		for(int i = 0; i < a.length(); i++){
			if(a[i] != b[i+leng]) cnt++;
		}
		ret = min(ret, cnt);
	} 
	cout << ret;
	return 0;
}

