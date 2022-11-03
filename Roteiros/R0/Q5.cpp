#include <bits/stdc++.h>

using namespace std;

void solve(int N);

int main() {
    int N = 1;
    int counter = 1;

    while (1) {
        cin >> N;
        if (!N) break;
        cout << "Teste " << counter << '\n';
        solve(N);
        counter++;
    }

    return 0;
}

void solve(int N) {
    string p1, p2;
    cin >> p1 >> p2;
    while (N--) {
        int A, B;
        cin >> A >> B;
        string answ = (A + B) % 2 == 0 ? p1 : p2;
        cout << answ << '\n';
    }
    cout << '\n';
}