#include <bits/stdc++.h>

using namespace std;

int main() {
    int N = 1;
    int counter = 1;
    while (1) {
        cin >> N;

        if (!N) break;

        int answ;

        for (int i = 0; i < N; i++) {
            int v;
            cin >> v;
            if (v == i + 1) {
                answ = v;
            }
        }

        cout << "Teste " << counter << '\n';
        cout << answ << "\n\n";

        counter++;
    }

    return 0;
}