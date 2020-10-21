#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    int max = 0;
    vector<int> nums;
    vector<int> dp;

    cin >> N;
    nums.resize(N);
    dp.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < nums.size(); i++) {
        int localMax = 0;
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (nums[j] > nums[i]) {
                localMax = dp[j] > localMax ? dp[j] : localMax;
            }
        }
        dp[i] = localMax + 1;
        max = max > dp[i] ? max : dp[i];
    }
    cout << max;

    return 0;
}