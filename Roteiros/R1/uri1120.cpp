#include <bits/stdc++.h>

using namespace std;

int main() {
    string D, N;

    while (1) {
        cin >> D >> N;

        if (D == "0" && N == "0") break;

        auto answ = remove(N.begin(), N.end(), D[0]);

        N.erase(answ, N.end());

        auto b = find_if(N.begin(), N.end(), [](char c){ return c != '0'; });

        N.erase(N.begin(), b);

        if (N.empty() || count(N.begin(), N.end(), '0') == N.size()) {
            cout << "0\n";
            continue;
        }

        cout << N << '\n';

    }

    return 0;
}