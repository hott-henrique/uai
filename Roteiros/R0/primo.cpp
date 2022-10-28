#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    if (N <= 1) {
        cout << "nao\n";
        return 0;
    }

    for (int i = 2; i < N; i++) {
        if (N % i == 0) {
            cout << "nao\n";
            return 0;
        }
    }

    cout << "sim\n";

    return 0;
}