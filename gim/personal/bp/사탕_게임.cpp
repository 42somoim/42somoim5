#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

string board[50];
int N;

bool is_safe(int x, int y)
{
    return (max(x, y) < N);
}

int max_of_candy(void)
{
    int ret = 1;

    for (int i = 0; i < N; i++){
        int temp = 1;
        for (int j = 1; j < N; j++){
            if (board[i][j] == board[i][j - 1])
                temp++;
            else
            {
                ret = max(ret, temp);
                temp = 1;
            }
            ret = max(ret, temp);
        }
    }
    for (int i = 0; i < N; i++){
        int temp = 1;
        for (int j = 1; j < N; j++){
            if (board[j][i] == board[j - 1][i])
                temp++;
            else
            {
                ret = max(ret, temp);
                temp = 1;
            }
            ret = max(ret, temp);
        }
    }
    return (ret);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int ret = 0;

    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> board[i];
    for (int x = 0; x < N; x++){
        for (int y = 0; y < N - 1; y++){
            if (is_safe(x, y + 1))
            {
                swap(board[x][y], board[x][y + 1]);
                ret = max(ret, max_of_candy());
                swap(board[x][y], board[x][y + 1]);
            }
            if (is_safe(x + 1, y))
            {
                swap(board[x][y], board[x + 1][y]);
                ret = max(ret, max_of_candy());
                swap(board[x][y], board[x + 1][y]);
            }
        }
    }
    cout << ret << '\n';
    return (0);
}