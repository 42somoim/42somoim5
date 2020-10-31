#include <iostream>

using namespace std;

int main(){
    int n = 0;

    cin >> n;
    long dp[n + 1] = {0,};
    for(int i = 0;i <= n;i++)
        if(i < 2)
            dp[i] = i;
        else
            dp[i] = dp[i-1] + dp[i-2];
    cout << dp[n] << endl;
}