#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;

    cin >> N >> M;

    vector<int> sr(N, 0), sc(M, 0);

    int v;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> v;
            sr[i] += v;
            sc[j] += v;
        }
    }

    cout << max(*max_element(sr.begin(), sr.end()), *max_element(sc.begin(), sc.end())) << '\n';

    return 0;
}