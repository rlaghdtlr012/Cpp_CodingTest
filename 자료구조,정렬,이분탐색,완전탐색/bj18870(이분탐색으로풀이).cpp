#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int b[1000005];
vector<int> v;
int n, mid;
int start, end;
int binarySearch(int target){
	int start = 0;
	int end = v.size()-1;
	while(start <= end){
		mid = (start+end)/2;
		if(v[mid] > target){
			end = mid - 1;
		}
		else if(v[mid] < target){
			start = mid + 1;
		}
		else{
			return mid;
		}
	}
	return 0;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a,a+n);
	v.push_back(a[0]);
	for(int i = 1; i < n; i++){
	if(a[i] != a[i-1]) v.push_back(a[i]);
	else continue;
	}
	for(int i = 0; i < n; i++){
		cout << binarySearch(b[i]) << " ";
	}
	return 0;
}
