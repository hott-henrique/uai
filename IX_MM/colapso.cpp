#include <bits/stdc++.h>

using namespace std;

using matrix = vector<vector<int>>;

matrix pre_process(matrix const &m);
int find_max(matrix const &m, int l, int c, int k);

int main() {
    int N, M, K, Q;
    cin >> N >> M >> K >> Q;

    matrix grid(N, vector<int>(M, 0));

    for (int i = 0; i < Q; i++) {
        int A, B, D;
        cin >> A >> B >> D;
        grid[A - 1][B - 1] = D;
    }

    auto z = pre_process(grid);

    int answ = -1;

    /* For each submatrix of size K² */
    for (int i = K - 1; i < N; i++) {
        for (int j = K - 1; j < M; j++) {
            /* Find the count of zeros in the submatrix */
            int czs = z[i][j];

            if (i - K >= 0 && j - K >= 0) {
                czs += z[i - K][j - K];
            }

            if (j - K >= 0) {
                czs -= z[i][j - K];
            }
            
            if (i - K >= 0) {
                czs -= z[i - K][j];
            }

            int l = i - (K - 1);
            int c = j - (K - 1);

            if (czs == 0) {
                /* The max value in that submatrix is the minimun amount of time to happen. */
                int maxsm = find_max(grid, l, c, K);
                if (answ == -1 || maxsm < answ) {
                    answ = maxsm;
                }
            }
        }
    }

    cout << answ << '\n';

    return 0;
}

int find_max(matrix const &m, int l, int c, int k) {
    int maxf = m[l][c];

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            auto v = m[i + l][j + c];
            if (v >= maxf){
                maxf = v;
            }
        }
    }

    return maxf;
}

matrix pre_process(matrix const &m) {
    matrix rz(m.size(), vector<int>(m[0].size(), 0));

    rz[0][0] = (m[0][0] == 0);

    for (int i = 1; i < m.size(); i++) {
        rz[i][0] = (m[i][0] == 0) + rz[i - 1][0];
    }

    for (int i = 1; i < m[0].size(); i++) {
        rz[0][i] = (m[0][i] == 0) + rz[0][i - 1];
    }

    for (int i = 1; i < m.size(); i++) {
        for (int j = 1; j < m[0].size(); j++) {
            rz[i][j] = (m[i][j] == 0) + rz[i - 1][j] + rz[i][j - 1] - rz[i - 1][j - 1];
        }
    }

    return rz;
}
