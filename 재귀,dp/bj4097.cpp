#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(1){
		int input;
		int sum = 0;
		cin >> n;
		if(n == 0) break;
		int max = -10005;
		for(int i = 0; i < n; i++){
			cin >> input;
			if((sum + input) > input){
				sum = sum+input;
			}
			else{
				sum = input;
			}
			
			if(max < sum){
				max = sum;
			}
		}
		cout << max << '\n';
	}
	return 0;
}

