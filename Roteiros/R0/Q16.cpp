#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll> ll_to_b36(ll v);
ll b36_to_ll(string v);
ll b36_to_ll(char v);

int main() {
    string a, b;

    while (1) {
        cin >> a >> b;

        if (a == "0" && b == "0") break;

        ll A = b36_to_ll(a);
        ll B = b36_to_ll(b);

        ll v = A + B;

        vector<ll> ans = ll_to_b36(v);

        for (ll i = 0; i < ans.size(); i++) {
            ll n = ans[ans.size() - (i + 1)];
            if (n >= 10) {
                cout << char(n+55);
                continue;
            }
            cout << n;
        }

        cout << '\n';

    }

    return 0;
}

// long long integer to vector 
vector<ll> ll_to_b36(ll v) {
    vector<ll> ans;

    while (1) {
        ll pInt = v / 36;
        int r = v % 36;

        ans.push_back(r);

        if (!pInt) {
            break;
        }

        v = pInt;
    }

    return ans;
}

// string in base 36 to long long integer
ll b36_to_ll(string v) {
    ll total = 0;

    for (ll i = 0; i < v.size(); i++)
    {
        ll idx = v.size() - (i + 1);
        total += b36_to_ll(v[idx]) * pow<ll, ll>(36, i);
    }

    return total;
}

// Single char in base 36 to long long integer
ll b36_to_ll(char v) {
    if (!isdigit(v)) {
        return (v - 65) + 10;
    } else {
        return v - '0';
    }
}
