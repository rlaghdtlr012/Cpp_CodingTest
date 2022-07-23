#include<bits/stdc++.h>
using namespace std;
string s;
int maybe = 100;
char b;
int trial;
int name;
int num[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int main(){
	cin >> trial;
	for(int i = 0; i < trial; i++){
		cin >> s;
		name = s[0] - 97;
		num[name]++;
	}
	for(int i = 0; i < 26; i++){
		if(num[i] >= 5){
			maybe = 1;
			b = i+97;
			cout << b;
		}
	}
	if(maybe == 100){
		cout << "PREDAJA";
	}
	return 0;
}
