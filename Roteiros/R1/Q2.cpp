#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    if (N <= 10) {
        cout << 7 << '\n';
        return 0;
    }

    int answ = 7;

    N = N - 10;

    int t1 = min(N, 20);

    answ += t1 * 1;

    N -= t1;

    int t2 = min(N, 70);

    answ += t2 * 2;

    N -= t2;

    int t3 = max(N, 0);

    answ += t3 * 5;

    cout << answ << '\n';

    return 0;
}