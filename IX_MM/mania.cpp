#include <bits/stdc++.h>

using namespace std;

int main() {
    int G;
    string S;
    S.reserve(1e5);
    cin >> G;
    cin >> S;

    int c = 0;

    for (auto &&e : S)
    {
        if (e == 'D') c -= G;
        else c += G;
    
        if (abs(c) >= 360) {
            cout << "S\n";
            return 0;
        }
    }

    cout << "N\n";

    return 0;
}