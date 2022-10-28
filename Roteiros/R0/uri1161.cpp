#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main() {

    while (true)
    {
        ull N, M;
        cin >> N >> M;

        if (!cin) {
            break;
        }

        auto fat = [](ull n) {
            ull r = 1;
            while(n > 1) {
                r *= n;
                n--;
            }
            return r;
        };

        cout << (fat(N) + fat(M)) << '\n';
    }

    return 0;
}