#include <bits/stdc++.h>

using namespace std;

int main() {

    while (true)
    {
        int N, R;
        cin >> N >> R;
        if (!cin) {
            break;
        }

        vector<int> back(R);
        for(int i = 0; i < R; i++) {
            cin >> back[i];
        }

        if  (N == R) {
            cout << '*';
        } else {
            for (int i = 1; i < N + 1; i++) {
                if (find(back.begin(), back.end(), i) == back.end()) {
                    cout << i << ' ';
                }
            }
        }

        cout << '\n';

    }


    return 0;
}