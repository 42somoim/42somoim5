#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[2][301];
int main(){
    int n;
    cin >>n;
    vector<int> v;

    for(int i=0; i<n; i++){
        int a;
        cin >>a;
        v.push_back(a);
    }
    arr[0][0]=v[0];
    arr[1][0]=v[0];
    
    arr[0][1]=v[0]+v[1];      //전에서 바로 뛴거
    arr[1][1]=v[1];            //2칸 전에서 뛴거
    for(int j=2; j<n; j++){
        arr[0][j]=arr[1][j-1]+v[j]; //전에서 바로 뛴거는 전에꺼가 2칸 뛰었어야함
        arr[1][j]=max(arr[0][j-2]+v[j],arr[1][j-2]+v[j]);  //2칸 전에서 뛴거는 2칸 전이 한칸 뛰었어야함
    }

    cout<<max(arr[0][n-1], arr[1][n-1]);
}
