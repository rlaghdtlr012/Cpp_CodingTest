#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin >> n;
	int i = 2;
	while(n != 1){
		if(n%i == 0){
			n /= i;
			cout << i << '\n';
		}
		else i++;
	}
	return 0;
}
