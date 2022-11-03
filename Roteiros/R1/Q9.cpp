#include <bits/stdc++.h>

using namespace std;

int main() {
    int N = 1;

    while (1) {
        cin >> N;

        if (!N) break;

        if (N == 1) {
            cout << right << setw(3) <<  1 << "\n";
        } else {
            vector<vector<int>> mat(N, vector<int>(N, 1));

            for (int i = 0; i < N; i++) {
                for (int j = i; j < N - i; j++) {
                    for (int k = i; k < N - i; k++) {
                        mat[j][k] = i + 1;
                    }
                }
            }

            for (int i = 0; i < N; ++i) {
                for (int j = 0; j < N; ++j) {
                    cout << right << setw(3) << mat[i][j];
                }
                cout << right << setw(3) << "\n";
            }
        }

        cout << right << setw(3) << "\n";
    }

    return 0;
}