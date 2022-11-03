#include <bits/stdc++.h>

using namespace std;

string c = "ABC";

int main() {
    while (true)
    {
        stack<char> z, o;
        int A, B, C;

        cin >> A >> B >> C;

        if (!cin) {
            break;
        }

        if (A) o.push('A');
        else z.push('A');

        if (B) o.push('B');
        else z.push('B');
    
        if (C) o.push('C');
        else z.push('C');

        if (z.size() == 1) {
            cout << z.top() << '\n';
        } else if (o.size() == 1) {
            cout << o.top() << '\n';
        } else {
            cout << "*\n";
        }
    }

    return 0;
}