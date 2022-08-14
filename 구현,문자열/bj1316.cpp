#include<bits/stdc++.h>
using namespace std;
int n, cnt;
string s;
int main(){
	cin >> n;
	while(n--){
		cin >> s;
		bool flag = true;
		for(int i = 0; i < size ; i++){
			for(int j = 0; j < i; j++){
				if(s[i] != s[i-1] && s[i] == s[j]){
					flag = false;
					break;
				}
			}
		}
		if(flag) cnt++;
	}
	cout << cnt;
	return 0;
}
