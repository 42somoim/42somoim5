#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> cards(N + 1);
    vector<int> dp(N + 1, 0);
    for (int i = 1; i <= N; i++)
        cin >> cards[i];

    for (int i = 0; i <= N; i++)
        for (int j = 0; j <= i; j++)
            dp[i] = max(dp[i], dp[i - j] + cards[j]);

    cout << dp[N];

    return 0;
}