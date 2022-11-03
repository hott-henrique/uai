#include <bits/stdc++.h>

using namespace std;

int main() {
    float x1, y1;
    float x2, y2;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    cout << fixed << showpoint;
    cout << setprecision(4);
    cout << sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) << '\n';

    return 0;
}