#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

#define MAX 1001

string str1, str2;
int dp[MAX][MAX];

void print_lcs(int row, int col) {
    if (dp[row][col] == 0)
        return ;
    if (str1[col - 1] == str2[row - 1]) {
        print_lcs(row - 1, col - 1);
        cout << str1[col - 1];
    } else {
        dp[row - 1][col] > dp[row][col - 1] ? print_lcs(row - 1, col) : print_lcs(row, col - 1);
    }
}

int main(void) {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int col, row;

    cin >> str1 >> str2;
    col = str1.length();
    row = str2.length();
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (str2[i] == str1[j])
                dp[i + 1][j + 1] = dp[i][j] + 1;
            else
                dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
        }
    }
    cout << dp[row][col] << '\n';
    if (dp[row][col] == 0)
        return (0);
    print_lcs(row, col);
    cout << '\n';
    return (0);
}