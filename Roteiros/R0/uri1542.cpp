#include <bits/stdc++.h>

using namespace std;

int main() {
    while (1) {
        int Q, D, P;

        cin >> Q >> D >> P;

        if (!Q) break;

        long long v = (long long)(abs((P * Q * D) / (Q - P)));
        v > 1 ? cout << v << " paginas\n" : cout << v << " pagina\n";
    }

    return 0;
}