#include<bits/stdc++.h>
using namespace std;
int a[100005];
int n;
int binarysearch(int target){
	int start = 0;
	int end = n-1;
	while(start <= end){
		int mid = (start+end)/2;
		if(a[mid] < target){
			start = mid+1;
		}
		else if(a[mid] > target){
			end = mid-1;
		}
		else{
			return 1;
		}
	}
	return 0;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a+n);
	int m;
	cin >> m;
	for(int i = 0; i < m; i++){
		int t;
		cin >> t;
		cout << binarysearch(t) << "\n";
	}
	return 0;
}
