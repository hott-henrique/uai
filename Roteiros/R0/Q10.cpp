#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, P, Q;
    char C;
    cin >> N >> P >> C >> Q;

    switch (C) {
        case '+':
            P + Q > N ? cout << "OVERFLOW\n" : cout << "OK\n";
        break;

        case '*':
            P * Q > N ? cout << "OVERFLOW\n" : cout << "OK\n";
        break;
    }

    return 0;
}