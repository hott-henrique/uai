#include <bits/stdc++.h>

using namespace std;

int get_max_path(vector<int> vec, int idx);

int main() {
    int N;
    
    cin >> N;

    vector<int> vec(N + 1, 0);

    vec.push_back(0);

    while (N--) {
        int v;
        cin >> v;
        vec.push_back(v);
    }

    int answ = get_max_path(vec, 0);

    cout << answ << '\n';

    return 0;
}

int get_max_path(vector<int>vec, int idx) {
    if (idx + 2 >= vec.size()) {
        return vec[idx];
    }

    int ip2 = get_max_path(vec, idx + 2);

    if (idx + 3 >= vec.size()) {
        return vec[idx] + ip2;
    }

    int ip3 = get_max_path(vec, idx + 3);

    int maxp = max(ip2, ip3);

    return vec[idx] + maxp;
}