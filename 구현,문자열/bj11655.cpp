#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	getline(cin,s);
	for(int i = 0; i < s.size(); i++){
		if(s[i] >= 65 && s[i] <= 77){
			s[i] = s[i]+13;
		}
		else if(s[i] > 77 && s[i] <= 90){
			s[i] = s[i] + 13 -26;
		}
		else if(s[i] >= 97 && s[i] <= 109){
			s[i] = s[i]+13;
		}
		else if(s[i] > 109 && s[i] <= 122){
			s[i] = s[i] + 13 -26;
		}
		else continue;
	}
	cout << s;
	return 0;
}
