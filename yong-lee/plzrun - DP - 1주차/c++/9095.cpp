#include <iostream>
#include <algorithm>
using namespace std;
int arr[12];

int main(){
	int t;
	cin >>t;
	
	for(int i=1; i<=11; i++){
		if(i==1){
			arr[i]=1;
		}
		else if(i==2){
			arr[i]=2;
		}
		else if(i==3){
			arr[i]=4;
		}
		else{
			arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
		}
	}

	while(t--){
		int n;
		cin >>n;
		cout<<arr[n]<<"\n";
	}
}