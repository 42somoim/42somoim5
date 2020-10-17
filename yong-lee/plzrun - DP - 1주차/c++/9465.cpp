#include <iostream>
using namespace std;
int arr[2][100001];

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        for(int i=0; i<2; i++){
            for(int j=1; j<=n; j++){
                cin >>arr[i][j];
            }
        }

        for(int j=1; j<=n; j++){
            arr[0][j]=max(arr[0][j-1],arr[1][j-1]+arr[0][j]);
            arr[1][j]=max(arr[1][j-1],arr[0][j-1]+arr[1][j]);
        }
        cout<<max(arr[0][n],arr[1][n])<<"\n";
    }
}