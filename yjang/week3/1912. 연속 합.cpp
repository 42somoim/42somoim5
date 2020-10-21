#include <iostream>

using namespace std;

int main() {
    int size = 0;
    cin >> size;

    int localMax = 0;
    int globalMax = -1e4;
    int num;

    for (int i = 0; i < size; i++) {
        cin >> num;
        localMax += num;
        
        if (localMax > globalMax)
            globalMax = localMax;

        if (localMax < 0)
            localMax = 0;
    }
    cout << globalMax;

    return 0;
}
