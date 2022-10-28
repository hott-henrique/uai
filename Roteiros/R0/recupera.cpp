#include <bits/stdc++.h>

using namespace std;


int main() {
    int counter = 0;
    while (1) {
        int N;
        cin >> N;

        if (!cin) {
            break;
        }

        cout << "\nInstancia " << counter + 1 << '\n';

        vector<int> values(N + 1, 0);
        vector<int> aux(N + 1, 0);

        for (int i = 1; i <= N; i++) {
            int v;
            cin >> v;
            values[i] = v;
            aux[i] = values[i - 1] + aux[i - 1];
        }

        bool found = false;

        for (int i = 1; i <= N; i++) {
            if (values[i] == aux[i]) {
                cout << values[i] << '\n';
                found = true;
                break;
            } 
        }

        if (!found) cout << "nao achei\n";

        counter++;
    }


    return 0;
}