#include <bits/stdc++.h>

using namespace std;

int main() {
    list<int> w;

    int M, N;

    for (int i = 0; i < 8; ++i) {
        cin >> M >> N;

        int win = (M > N ? 1 : 2) + (i * 2);
        w.push_back(win);
    }
    

    for (int i = 0; i < 4; ++i) {
        cin >> M >> N;

        int a = w.front(); w.pop_front();
        int b = w.front(); w.pop_front();

        int win = (M > N ? a : b);
        
        w.push_back(win);
    }
    

    for (int i = 0; i < 2; ++i) {
        cin >> M >> N;

        int a = w.front(); w.pop_front();
        int b = w.front(); w.pop_front();

        int win = (M > N ? a : b);
        
        w.push_back(win);
    }

    cin >> M >> N;

    int a = w.front(); w.pop_front();
    int b = w.front(); w.pop_front();

    int win = (M > N ? a : b);

    cout << char('A' - 1 + win) << '\n';

    return 0;
}