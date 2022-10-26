#include <bits/stdc++.h>

using namespace std;


int main() {
    int N, M, K, Q;
    cin >> N >> M >> K >> Q;

    vector<tuple<int, int, int>> history;
    for (int i = 0; i < Q; i++) {
        int A, B, D;
        cin >> A >> B >> D;
        history.push_back(make_tuple(A, B, D));
    }
    auto cmp_hist = [](const tuple<int,int,int>& a, const tuple<int,int,int>& b) {
        return get<2>(a) < get<2>(b);
    };

    sort(
        history.begin(),
        history.end(),
        cmp_hist
    );

    for (int i = 0; i < Q; i++) {
        cout << get<0>(history[i]) << get<1>(history[i]) << get<2>(history[i]) << '\n';
    }

    auto tm =  max_element(history.begin(), history.end(), cmp_hist);

    cout << distance(history.begin(), tm) << '\n';

    return 0;
}
