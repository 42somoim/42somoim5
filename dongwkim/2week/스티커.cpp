#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int T;
    cin >> T;
    int stickers[2][100001] = {0,};
    int dp[2][100001] = {0,};
    while(T--){
        int n;
        cin >> n;
        int answer = 0;
        for(int i = 0;i < n;i++)
            cin >> stickers[0][i];
        for(int i = 0;i <n;i++)
            cin >> stickers[1][i];
        for(int i = 0;i < 2;i++){
            dp[0][i] = stickers[0][i];
            dp[1][i] = stickers[1][i];
        }
        for(int i = 2;i < n;i++){
            dp[0][i] = stickers[0][i] + max(dp[1][i-1], dp[1][i-2]);
            dp[1][i] = stickers[1][i] + max(dp[0][i-1], dp[0][i-2]);
        }
        cout << max(dp[0][n-1],dp[1][n-1]) << endl;
    }
}