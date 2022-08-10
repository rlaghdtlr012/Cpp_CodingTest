#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string s1, s2;
	int cnt = 0, cnt2 = 0;
	cin >> s1 >> s2;
	int temp = -1;
	int size = s1.size();
	if(s1.size() == s2.size()){
		for(int i = 0; i < s1.size(); i++){
			if(s1[i] == s2[i]) cnt++;
			else continue;	
		}
	}
	else{
		for(int i = 0; i < s1.size(); i++){
			for(int j = temp+1; j < s2.size(); j++){
				if(s1[i] == s2[j]){
					int temp = j;
					cnt++;
					break;
				}
				else continue;
			}
		}
	}
	
	cout << size-cnt;
	return 0;
}
//adaabc
//aababbc
//
//hello
//xello
//
//koder
//topcoder
