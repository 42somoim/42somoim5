#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    for(int i=1; i<=n; i++){
        if(i==n){
            for(int j=0; j<2*n-1; j++){
                cout<<"*";
            }
            break;
        }
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        if(i==1){
            cout<<"*";
        }
        else{
            cout<<"*";
            for(int j=1; j<=2*(i-1)-1; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<"\n";
    }
}
