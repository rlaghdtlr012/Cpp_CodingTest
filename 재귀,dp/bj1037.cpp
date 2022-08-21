#include<bits/stdc++.h>
using namespace std;
char board[8][8];
int cnt;
int main(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cin >> board[i][j];
			if(i%2 == 0 && j%2 == 0 && board[i][j] == 'F') cnt++;
			if(i%2 == 1 && j%2 == 1 && board[i][j] == 'F') cnt++;
		}
	}
	cout << cnt;
	return 0;
}
