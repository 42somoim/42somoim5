#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    int ans = 0;
    vector<int> nums;
    vector<int> increaseDP, decreaseDP;

    cin >> N;
    nums.resize(N);
    increaseDP.resize(N);
    decreaseDP.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < nums.size(); i++) {
        int localMin = 0;
        increaseDP[i] = 1;
        for (int j = 0; j < i; j++) {
            if (nums[j] < nums[i]) {
                localMin = max(increaseDP[j], localMin);
            }
        }
        increaseDP[i] = localMin + 1;
    }

    for (int i = N - 1; i >= 0; i--) {
        int localMax = 0;
        decreaseDP[i] = 1;
        for (int j = N - 1; j > i; j--) {
            if (nums[j] < nums[i]) {
                localMax = max(decreaseDP[j], localMax);
            }
        }
        decreaseDP[i] = localMax + 1;
    }

    for (int i = 0; i < N; i++) {
        ans = max(ans, increaseDP[i] + decreaseDP[i]);
    }
    cout << ans - 1;

    return 0;
}