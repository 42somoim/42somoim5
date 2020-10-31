/*Brute force : 컴퓨터의 계산 능력으로 최대한 검사할 수 있는 모든 경우의 수를 검사하는 방법.
주로 다중 반복문, 재귀를 통해 주어진 범위 내에서 문제를 해결하는 경우가 많다.
문제 출제 유형에서는 컴퓨터의 계산 능력을 요하는 문제가 많기 때문에 주어진 범위에 따른 타입 설정이 중요하다. (int vs long long)
다른 유형과는 달리 코드가 길어질 수 있다는 단점이 있지만 논리적인 흐름대로 충분히 풀이가 가능한 방법.
*/

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

    int row, col, ret = 33; // 행, 열, 최종 리턴값 초기화

    cin >> row >> col;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin >> board[i][j];
        }
    } // board 배열에 값 받아 오기.
    for (int i = 0; i <= row - 8; i++){
        for (int j = 0; j <= col - 8; j++){
            ret = min(ret, bp(i, j));
        }
    }//ret 과 8x8 배열이 가능한 모든 경우의 리턴값을 비교해 최소값 도출
    cout << ret << '\n';
    return (0);
}