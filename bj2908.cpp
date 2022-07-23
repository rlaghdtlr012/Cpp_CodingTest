#include<bits/stdc++.h>
using namespace std;
int main(){
	string a, b;
	cin >> a >> b;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int c = stoi(a);
	int d = stoi(b);
	cout << c << '\n';
	cout << d;
	if(c>d) cout << c;
	else cout << d;
	return 0;
}
