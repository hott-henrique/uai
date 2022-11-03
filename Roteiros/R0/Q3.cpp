#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    int r = 1;

    while (N > 0) {
        r *= N;
        N--;
    }

    cout << r << '\n';

    return 0;
}