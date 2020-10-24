#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

const int N = 9;
int arr[N];
int sum = 0;
int a, b;
vector<int> v;

int main(void)
{
    for (int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    for (int i = 0; i < N - 1; i++){
        for (int j = 1; j < N; j++){
            if (i == j)
                continue;
            if (sum - arr[i] - arr[j] == 100){
                a = i;
                b = j;
                break;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (i == a || i == b)
            continue;
        v.push_back(arr[i]);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        printf("%d\n", v[i]);
    return (0);
}
