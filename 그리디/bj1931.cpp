#include<bits/stdc++.h>
using namespace std;
int n, a, b, cnt;
pair<int,int> s[100005];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s[i].second >> s[i].first; // second = ���۽ð�, first = ������ �ð� 
	}
	sort(s, s+n); // ���۽ð��� ���� ������, ���۽ð��� ���ٸ� ���� ������ ������ 
	int ans = 0;
	int t = 0;
	for(int i = 0; i < n; i++){
		if(t > s[i].second) continue;
		ans++;
		t = s[i].first;
	}
	cout << ans;
	return 0;
}
