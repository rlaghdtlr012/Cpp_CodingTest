#include<bits/stdc++.h>
using namespace std;
int trial, cnt;
string s;
int main(){
	cin >> trial;
	for(int i = 0; i < trial; i++){
		cin >> s;
		stack<char> stk;
		for(auto a : s){
			if(stk.size() == 0 || a != stk.top()){
				stk.push(a);
			}
			else if(stk.size() != 0 && a == stk.top()) stk.pop();
		}
		if(stk.size() == 0) cnt++;
	}
	cout << cnt;
	return 0;
}
