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

	vector<int> v(R);
	for (int i = 0; i < R; ++i) {
		cin >> v[i];
	}

        if (N == R) {
		cout << "*\n";
        } else {
		for (int i = 0; i < N; ++i) {
			if (find(v.begin(), v.end(), i + 1) == v.end()) {
				cout << i + 1 << ' ';
			}
		}
	}

	cout << '\n';


    }

    return 0;
}
