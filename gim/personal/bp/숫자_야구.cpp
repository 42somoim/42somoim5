#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

bool arr[1000];
bool visit[10];
int dp[3];
int T, N, s, b, cnt = 0;

void input_true(int depth)
{
    if (depth == 3)
    {
        int idx = dp[0] * 100 + dp[1] * 10 + dp[2];
        arr[idx] = true;
        return ;
    }
    for (int i = 1; i <= 9; i++)
    {
        if (!visit[i])
        {
            visit[i] = true;
            dp[depth] = i;
            input_true(depth + 1);
            visit[i] = false;
        }
    }
}

int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    input_true(0);
    cin >> T;
    for (int i = 0; i < T; i++){
        cin >> N >> s >> b;
        string num = to_string(N);
        for (int i = 123; i <= 987; i++){
            if (!arr[i])
                continue;
            string cmp = to_string(i);
            int s_cnt = 0;
            int b_cnt = 0;
            for (int a = 0; a < 3; a++){
                for (int b = 0; b < 3; b++){
                    if (a == b && num[a] == cmp[b])
                        s_cnt++;
                    if (a != b && num[a] == cmp[b])
                        b_cnt++;
                }
            }
            if (s != s_cnt || b != b_cnt)
                arr[i] = false;
        }
    }
    for (int i = 123; i <= 987; i++){
        if (arr[i])
            cnt++;
    }
    printf("%d\n", cnt);
    return (0);
}