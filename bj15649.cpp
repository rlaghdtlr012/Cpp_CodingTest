#include<bits/stdc++.h>
using namespace std;
int a, b;
vector<int> num;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> a >> b;
	for(int i = 1; i <= a; i++) num.push_back(i);
	do{
		for(int i = 0; i < b; i++){
			cout << num[i] << ' ';
	} cout << '\n';
	reverse(num.begin()+b,num.end());
	}while(next_permutation(num.begin(), num.end()));
	return 0;
}
