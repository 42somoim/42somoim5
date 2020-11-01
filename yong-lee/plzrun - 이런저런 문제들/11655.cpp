#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	for(int i=0; i<str.size(); i++){
		if(str[i]>='A' && str[i] <= 'Z'){
			int temp=str[i]-'A';
			temp+=13;
			temp%=26;
			str[i]=temp+'A';
		}
		else if(str[i]>='a' && str[i]<='z'){
			int temp=str[i]-'a';
			temp+=13;
			temp%=26;
			str[i]=temp+'a';
		}
	}
	cout<<str;
}