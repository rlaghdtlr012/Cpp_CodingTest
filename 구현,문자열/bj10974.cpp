#include<bits/stdc++.h>
using namespace std;
vector<char> num;
string p;
int a, num1;
int main(){
	while(cin >> p >> a){
		string b = p;
		int cnt = 1;
		do{
			for(auto i : p){
				if(cnt == a) num.push_back(i);
			}
			if(cnt == a){
				cout << b << " " << a << " = ";
				for(auto i : num) cout << i;
				cout << '\n';
				num.clear();
			}
			cnt++;
		}while(next_permutation(p.begin(), p.end()));
		if(cnt < a){
			cout << b << " " << a << " = " << "No permutation\n";
		}
	}
	return 0;
}
