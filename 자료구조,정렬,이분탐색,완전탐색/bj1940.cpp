#include<bits/stdc++.h>
using namespace std;
int n, m, num;
int main(){
	cin >> n;
	cin >> m;
	int listIngredient[n];
	for(int i = 0; i < n; i++){
		cin >> listIngredient[i];
	}
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if (listIngredient[i] + listIngredient[j] == m){
				num++;
				break;
			}
		}
	}
	cout << num;
	return 0;
}
