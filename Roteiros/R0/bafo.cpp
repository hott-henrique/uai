#include <bits/stdc++.h>

using namespace std;

void solve(int R);

int main() {
    int R = 1;
    int counter = 1;

    while (1) {
        cin >> R;
        if (!R) break;
        cout << "Teste " << counter << '\n';
        solve(R);
        counter++;
    }

    return 0;
}

void solve(int R) {
    int tA = 0;
    int tB = 0;
    while (R--) {
        int A, B;
        cin >> A >> B;
        tA += A;
        tB += B;
    }
    string answ = tA > tB ? "Aldo" : "Beto";
    cout << answ << "\n\n";
}