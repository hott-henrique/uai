#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    string M; M.reserve(N);
    cin >> M;


    int cj = 0;

    int v = 0;
    for (int i = 1; i < N; ++i) {
        char c = M[i];

        if (M[i] == 'x') {
            v++;
            continue;
        }

        int j = i + 1;
        while (M[j] == '.'){
            j++;
        }

        int szh = j - i;


        if (szh > v) {
            cout << "-1\n";
            return 0;
        }

        v = 1;

        i = j + 1;

        cj++;
    }

    cout << cj << '\n';

    return 0;
}