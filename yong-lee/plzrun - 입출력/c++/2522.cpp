#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++){
            cout<<" ";
        }
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=1; i<=n-1; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=i; j<=n-1; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
