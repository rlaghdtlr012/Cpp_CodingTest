#include<bits/stdc++.h>
using namespace std;
int n, k;
int main(){
	cin >> n >> k;
	int nn = (n/100)*100;
	while(1){
		if(nn%k == 0) break;
		nn++;
	}
	string s = to_string(nn);
	cout << s[s.size()-2] << s[s.size()-1];
	return 0;
}
