#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[26];
	fill(a,a+26,0);
	string s;
	cin >> s;
	for(char i : s){
		a[int(i)-97] += 1;
	}
	for(int i : a){
		cout << i << " ";	
	}
	
	return 0;
}
