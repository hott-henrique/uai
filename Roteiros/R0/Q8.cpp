#include <bits/stdc++.h>

using namespace std;

int main() {
    int max;
    cin >> max;
    int idx = 0;
    for (int i = 1; i < 100; i++) {
        int N;
        cin >> N;
        if (N > max) {
            idx = i;
            max = N;
        }
    }

    cout << max << '\n' << idx + 1 << '\n';

    return 0;
}