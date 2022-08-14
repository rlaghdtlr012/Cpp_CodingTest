#include<bits/stdc++.h>
using namespace std;
long long num, cnt, ret;
int main(){	
	while(scanf("%d",&num) != EOF){
		ret = 1;
		cnt = 1;
		while(true){
			if(cnt % num == 0){
				printf("%d\n", ret);
				break;	
			}
			else{
				cnt = (cnt * 10)+1;
				cnt = cnt % num;
				ret++;
			}
		}
	}
	return 0;
}
