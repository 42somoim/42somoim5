#include <iostream>
using namespace std;
int arr[100010];

int main(){
	int n,m;
	cin >>n>>m;
	int total = n;
	int now = -1;
	cout<<"<";
	for(int i=0; i<n; i++){
		arr[i]=i+1;
	}
	for(int i=0; i<n; i++){
		now+=(m+total);
		now%=total;
		cout<<arr[now];
		if(i!=n-1){
			cout<<", ";
		}
		for(int j=now; j<total; j++){
			arr[j]=arr[j+1];
		}
		total--;
		now--;
	}
	cout<<">";
}