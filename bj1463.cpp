#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin >> a;
	int array[1000005];
	array[1] = 0;
	for(int i = 2; i <= a; i++){
		array[i] = array[i-1] + 1;
		if(i%2 == 0) array[i] = min(array[i], array[i/2]+1);
		if(i%3 == 0) array[i] = min(array[i], array[i/3]+1);
	}
	cout << array[a];
}
