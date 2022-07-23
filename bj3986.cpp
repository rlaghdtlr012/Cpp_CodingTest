#include<bits/stdc++.h>
using namespace std;
int num,cnt;
string s;
int main(){
	cin >> num;
	for(int i = 0; i < num; i++){
		cin >> s;
		stack<char> stk;
		for(char a : s){
			if(stk.size() != 0 && stk.top() == a) stk.pop();
			else stk.push(a);
		}
		if(stk.size() == 0) cnt++;
	}
	cout << cnt;
	return 0;
}
