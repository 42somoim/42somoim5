#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

char board[50][50];

int bp(int x, int y)
{
    int w, b, ret;

    w = 0;
    b = 0;
    for (int i = x; i < x + 8; i++){
        for (int j = y; j < y + 8; j++){
            if ((i % 2 == 0 && j % 2 == 0) \
                || (i % 2 != 0 && j % 2 != 0)){
                    if (board[i][j] == 'W')
                        b++;
                    else
                        w++;
                } else {
                    if (board[i][j] == 'B')
                        b++;
                    else
                        w++;
                }
        }
    }
    ret = min(w, b);
    return (ret);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int row, col, ret = 33;

    cin >> row >> col;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin >> board[i][j];
        }
    }
    for (int i = 0; i <= row - 8; i++){
        for (int j = 0; j <= col - 8; j++){
            ret = min(ret, bp(i, j));
        }
    }
    cout << ret << '\n';
    return (0);
}