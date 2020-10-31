#include <iostream>
#include <algorithm>

using namespace std;
int arr[1001];
int arr1[1001];
int arr2[1001];

int main(){
    int n;
    cin >>n;
    for(int i=0; i<n; i++){
        cin >>arr[i];
    }
    if(n==1){
        cout<<"1";
        return 0;
    }
    arr1[0]=1;
    for(int i=1; i<n; i++){
        int max_value=1;
        for(int j=0; j<i; j++){
            if(arr[i]>arr[j]){
                max_value = max(max_value,arr1[j]+1);
            }
        }
        arr1[i]=max_value;
    }
    arr2[n-1]=1;
    for(int i=n-2; i>=0; i--){
        int max_value=1;
        for(int j=n-1; j>i; j--){
            if(arr[i]>arr[j]){
                max_value = max(max_value, arr2[j]+1);
            }
        }
        arr2[i]=max_value;
    }
    int answer=0;
    for(int i=0; i<n; i++){
        answer=max(answer,arr1[i]+arr2[i]-1);
    }
    cout<<answer;
}