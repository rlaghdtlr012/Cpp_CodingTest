#include<bits/stdc++.h>
using namespace std;
string s;
int a = 100;
int main(){
	cin >> s;
	for(int i = 0; i <= (int)(s.size()/2); i++){
		if(s[i] == s[s.size()-(i+1)]){
			a = 1;
			continue;
		}
		else{
			a = 0;
			cout << "0" << '\n';
			break;
		}
	}
	if(a == 1){
		cout << "1" << '\n';
	}
	return 0;
}
