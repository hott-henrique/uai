#include <bits/stdc++.h>

using namespace std;

int main() {

    while (true)
    {
        int N;
        cin >> N;
        if (!cin) {
            break;
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (i + j + 1 == N) {
                    cout << 2;
                } else if (i == j) {
                    cout << 1;
                } else {
                    cout << 3;
                }
            }
            cout << '\n';
        }
        

    }

    return 0;
}