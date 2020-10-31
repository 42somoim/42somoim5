#include <iostream>
#include <cstdio>
#include <queue>
#include <string>

using namespace std;

void solution(string str, int N, string arr)
{
    deque<int> dq;
    int rev = 1, i = 0;

    while (arr[i])
    {
        if (arr[i] >= '0' && arr[i] <= '9')
            dq.push_back(arr[i] - '0');
        i++;
    }
    i = 0;
    while (str[i])
    {
        if (str[i] == 'R')
            rev *= -1;
        if (str[i] == 'D')
        {
            if (dq.size() == 0)
            {
                cout << "error" << '\n';
                return ;
            }
            rev > 0 ? dq.pop_front() : dq.pop_back();
        }
        i++;
    }
    cout << "[";
    for (int i = 0; i < N; i++)
    {
        if (rev > 0)
        {
            cout << dq.front() << ", ";
            dq.pop_front();
        }
        else
        {
            cout << dq.back() << ", ";
            dq.pop_back();
        }
    }
    cout << "]\n";
}

int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T, N;
    string str, arr;

    cin >> T;
    while (T--)
    {
        cin >> str >> N >> arr;
        solution(str, N, arr);
    }
    return (0);
}

/*
1. test case 받아 오기. o
2. 명령어, 원소 개수, 배열 모양 문자열 받기. o
3. 명령어 R이 들어올 때마다 상태 바꾸기 o
4. 변수의 조건에 따라 적절한 위치에서 pop o
5. 변수의 조건에 따라 출력 방향 설정
6. 에러 체킹 (D일 때 사이즈 체크) o
7. 배열의 숫자가 1이 아니면 제대로 받아오질 않음. => 배열은 char 배열로 받아오기
*/