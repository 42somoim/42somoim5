#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

void bp(int n)
{
    vector<int> v;

    v.push_back(0);
    int idx = 1;
    while (v.back() <= n)
    {
        v.push_back(v[idx - 1] + idx);
        idx++;
    }
    for (int i = 1; i < v.size(); i++){
        for (int j = 1; j < v.size(); j++){
            for (int k = 1; k < v.size(); k++){
                if (v[i] + v[j] + v[k] == n){
                    puts("1");
                    return ;
                }
            }
        }
    }
    puts("0");
    return ;
}

int main(void)
{
    int N, case_n;

    scanf("%d", &case_n);
    for (int i = 0; i < case_n; i++)
    {
        scanf("%d", &N);
        bp(N);
    }
    return (0);
}