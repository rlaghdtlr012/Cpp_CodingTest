#include<bits/stdc++.h>
using namespace std;
int board[1002][1002];
int dp[1002][1002];
int r, c, k;
int r1, c1, r2, c2;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> r >> c >> k;
	int sum = 0;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cin >> board[i][j];
		}
	}
	dp[1][1] = board[0][0];
    for(int i = 1 ; i<=r; i++)
    {
        for(int j = 1 ; j<=c ; j++)
        {
            dp[i][j] = dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+board[i-1][j-1];
        }
    }
    
    for(int i = 0 ; i< k; i++)
    {
        cin >> r1 >> c1 >> r2 >> c2;
        cout <<(dp[r2][c2] - dp[r1-1][c2] - dp[r2][c1-1]+dp[r1-1][c1-1])/((r2-r1+1)*(c2-c1+1))<<endl;
    }

	return 0;
}

