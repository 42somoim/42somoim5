#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];

int main(){
    int n;
    cin >>n;
    arr[0]=1;
    arr[1]=3;
    for(int i=2; i<n; i++){
        arr[i]=arr[i-2]*2+arr[i-1]*1;
        arr[i]%=10007;
    }

    cout<<arr[n-1];
}