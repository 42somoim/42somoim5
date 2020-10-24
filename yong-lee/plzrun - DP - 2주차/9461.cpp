#include <iostream>
using namespace std;
long long arr[101];

int main(){
    int t;
    cin >>t;
    arr[1]=1;
    arr[2]=1;
    arr[3]=1;
    for(int i=4; i<=100; i++){
        arr[i]=arr[i-3]+arr[i-2];
    }
    while(t--){
        long long a;
        cin >>a;
        cout<<arr[a]<<"\n";
    }
}