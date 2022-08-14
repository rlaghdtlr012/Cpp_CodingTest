#include<bits/stdc++.h>
using namespace std;
int n, cnt, cnt2;
int num[104];
int main(){
	cin >> n;
	for(int i = 0; i < n; i++) cin >> num[i];
	for(int i = 0; i < n; i++){
		cnt = 0;
		if(num[i] == 1) continue;
		else{
			for(int j = 1; j*j <= num[i]; j++){
				if(num[i] % j == 0) cnt++;
			}
			if(cnt == 1){
				cnt2++;	
			}	
		}
	}
	cout << cnt2;
}
