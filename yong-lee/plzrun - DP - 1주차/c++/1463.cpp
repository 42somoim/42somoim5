#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int dp[1000001];

int func(int a){
	if(a==1){
		return 0;
	}
	if(dp[a]){
		return dp[a];
	}
	else{
		if(a%6==0){
			return dp[a]=min(min(func(a/3),func(a/2)),func(a-1))+1;
		}
		else if(a%3==0){
			return dp[a]=min(func(a/3),func(a-1))+1;
		}
		else if(a%2==0){
			return dp[a]=min(func(a/2),func(a-1))+1;
		}
		return dp[a]=func(a-1)+1;
	}
}

int main(){
	cin >> n;
	dp[1]=0;
	dp[2]=1;
	cout<<func(n);
}