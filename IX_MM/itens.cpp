#include <bits/stdc++.h>

using namespace std;

static const int moves[4][2] = {
    { -1,  0 }, // UP
    {  0,  1 }, // RIGHT
    {  1,  0 }, // DOWN
    {  0, -1 }, // LEFT
};

void expand(int n, int m, int t, int ci, int cj, string * room, int counter, int * mat) {
    int idx = (ci * m) + cj;

    if (
        counter > t || // Baloon on ground.
        ci >= n || cj >= m || ci < 0 || cj < 0 || // Is out of bounderies?
        room[ci][cj] == '#' || // Is the position blocked?
        !(counter < mat[idx]) // Is it not a faster path?
    ) return;

    mat[idx] = counter;

    for (int i = 0; i < 4; i++) {
        int nci = ci + moves[i][0];
        int ncj = cj + moves[i][1];
        expand(n, m, t, nci, ncj, room, counter + 1, mat);
    }
}

int main() {
    int N, M, T, ci, cj;

    cin >> N >> M >> T >> ci >> cj;

    string room[N];
    for (int i = 0; i < N; i++) {
        cin >> room[i];
    }

    int mat[N * M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            mat[(i * M) + j] = INT_MAX;
        }
    }

    expand(N, M, T, ci - 1, cj - 1, room, 0, mat);

    int achivable = count_if(&mat[0], &mat[(N * M)], [T] (int n) { return (n <= T); });
    int possibles = 0;
    for (auto &&s : room) {
        possibles += count(s.begin(), s.end(), '.');
    }

    int factor = gcd(achivable, possibles);

    cout << achivable / factor << '\n'
         << possibles / factor << '\n';

    return 0;
}
