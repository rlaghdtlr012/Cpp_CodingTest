#include<bits/stdc++.h>
using namespace std;
int main(){
	float br = 350.34;
	float vs = 230.90;
	float hs = 190.55;
	float arm = 125.30;
	float leg = 180.90;
	int n, brn, vsn, hsn, armn, legn;
	cin >> n;
	while(n--){
		cin >> brn >> vsn >> hsn >> armn >> legn;
		cout << fixed;
		cout.precision(2);
		cout << "$" << br*brn+vs*vsn+hs*hsn+arm*armn+leg*legn << '\n';
		
	}
	return 0;
}
