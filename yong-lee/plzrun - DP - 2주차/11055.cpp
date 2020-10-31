#include <iostream>
#include <algorithm>
using namespace std;
int arr[1001];
int dp[1001];

int main(){
	int n;
	cin >>n;
	for(int i=1; i<=n; i++){
		cin >>arr[i];
	}
	int answer=0;
	for(int i=1; i<=n; i++){
		for(int j=0; j<i; j++){
			if(arr[i]>arr[j]){
				dp[i]=max(dp[j]+arr[i],dp[i]);
			}
			answer=max(answer,dp[i]);
		}
	}
	cout<<answer;
}