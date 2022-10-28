#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool is_prime(int N) {
    if (N <= 1) {
        return true;
    }

    for (int i = 2; i < N; i++) {
        if (N % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    while (true)
    {
        string s;
        cin >> s;
        if (!cin) {
            break;
        }

        ll v = 0;
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            if (int(c) < 97){
                v += (c - 65) + 27;
            } else {
                v += (c - 97) + 1;
            }
        }

        is_prime(v) ? cout << "It is a prime word.\n" : cout << "It is not a prime word.\n";
    }

    cout << '\n';

    return 0;
}