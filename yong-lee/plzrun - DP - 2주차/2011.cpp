#include <iostream>
#include <string>
using namespace std;
int arr[5001][2];
int main(){
	string str;
	cin >> str;

	if(str[0]=='0'){
		cout<<"0\n";
		return 0;
	}
	arr[0][0]=1;
	for(int i=1; i<str.size(); i++){
		if(str[i]-'0'+(str[i-1]-'0')*10 <= 26 && str[i]-'0'+(str[i-1]-'0')*10 > 0){
			arr[i][1]=arr[i-1][0];
			arr[i][1]%=1000000;
		}
		if(str[i]!='0'){
			arr[i][0]=arr[i-1][0]+arr[i-1][1];
			arr[i][0]%=1000000;
		}
	}
	if(arr[str.size()-1][0]+arr[str.size()-1][1]==0){
		cout<<"0\n";
	}
	else{
		cout<<(arr[str.size()-1][0]+arr[str.size()-1][1])%1000000;
	}
}