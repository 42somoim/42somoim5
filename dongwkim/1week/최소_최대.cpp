#include <iostream>

using namespace std;

int main(){
    int n, min = 1000000, max = -1000000, N;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> N;
        if(min > N)
            min = N;
        else if(max < N)
            max = N;
    }
    cout << min << " " << max << endl;
    return 0;
}