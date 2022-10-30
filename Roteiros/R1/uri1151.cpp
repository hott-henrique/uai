#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    int pp = 0, p = 1;

    cout << pp << " " << p;

    for (int i = 2; i < N; ++i) {
        int c = pp + p;
        cout << " " << c;
        pp = p;
        p = c;
    }
    cout << '\n';

    return 0;
}