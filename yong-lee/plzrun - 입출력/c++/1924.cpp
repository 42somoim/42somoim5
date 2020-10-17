#include <iostream>
#include <string>
using namespace std;
string arr[]={"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int main(){
    int x,y;
    cin >>x>>y;
    int day=0;
    for(int i=1; i<x; i++){
        day+=month[i];
    }
    day+=y;
    cout<<arr[day%7]<<"\n";
}
