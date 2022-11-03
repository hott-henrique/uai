#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    int r = 0;

    while(N--) {
        int a;
        cin >> a;

        r += a;
    }

    cout << r << '\n';

    return 0;
}