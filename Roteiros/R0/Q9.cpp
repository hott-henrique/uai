#include <bits/stdc++.h>

using namespace std;

int main() {
    float x, y;
    cin >> x >> y;

    if (x == 0.0f && y == 0.0f) {
        cout << "Origem\n";
        return 0;
    }

    if (x == 0.0f) {
        cout << "Eixo Y\n";
        return 0;
    }

    if (y == 0.0f) {
        cout << "Eixo X\n";
        return 0;
    }

    vector<vector<string>> quads = {
        { "Q2", "Q1" },
        { "Q3", "Q4" }
    };

    int i = 0;
    int j = 0;

    if (y < 0.0f) {
        i = 1;
    }

    if (x > 0.0f) {
        j = 1;
    }

    cout << quads[i][j] << '\n';

    return 0;
}