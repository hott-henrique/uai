#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v = { 100, 50, 20, 10, 5, 2, 1 };

    int N;
    cin >> N;

    cout << N << '\n';

    for (auto &&c : v) {
        cout << N / c << " nota(s) de R$ " << c << ",00\n";
        N = N - (N / c * c);
    }
    

    return 0;
}