#include<bits/stdc++.h>
using namespace std;
int n;
queue<int> q;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	while(n--){
		string s;
		int num;
		cin >> s;
		if(s == "push"){
			cin >> num;
			q.push(num); 
		}
		else if(s == "front"){
			if(q.empty()) cout << "-1\n";
			else cout << q.front() << '\n';
		}
		else if(s == "back"){
			if(q.empty()) cout << "-1\n";
			else cout << q.back() << '\n';
		}
		else if(s == "size"){
			cout << q.size() << '\n';
		}
		else if(s == "empty"){
			cout << q.empty() << '\n';
		}
		else if(s == "pop"){
			if(q.empty()) cout << "-1\n";
			else{
				num = q.front();
				q.pop();
				cout << num << '\n';
			}
		}
	}
	return 0;
}
