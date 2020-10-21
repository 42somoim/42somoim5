#include <iostream>

using namespace std;

int main() {
    int N, num;
    cin >> N;

    long long int dp[101] = {0, 1, 1, 1, 2, 2,};

    for (int i = 6; i < 101; i++) {
        dp[i] = dp[i - 1] + dp[i - 5];
    }

    for (int i = 0; i < N; i++) {
        cin >> num;
        cout << dp[num] << endl;
    }
    
    return 0;
}