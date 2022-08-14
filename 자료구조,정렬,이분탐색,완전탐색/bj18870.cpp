#include<bits/stdc++.h>
using namespace std;
int a[1000005];
vector<int> v;
int n;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		v.push_back(a[i]);
	}
	sort(v.begin(),v.end());
	//v.push_back(a[0]);
	//for(int i = 1; i < n; i++){
	//	if(a[i] != a[i-1]) v.push_back(a[i]);
	//	else continue;
	//}
	v.erase(unique(v.begin(), v.end()),v.end());
	for(int i = 0; i < n; i++){
		cout << lower_bound(v.begin(), v.end(), a[i]) - v.begin() << ' ';
	}
	return 0;
}
