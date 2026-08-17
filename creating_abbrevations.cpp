#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        bool available[26] = {};

        // First letters of original words
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;

            available[s[0] - 'a'] = true;
        }

        bool possible = true;

        // Check every abbreviation
        for (int i = 0; i < m; i++) {
            string s;
            cin >> s;

            for (char c : s) {
                if (!available[c - 'A']) {
                    possible = false;
                }
            }
        }

        cout << (possible ? "YES" : "NO") << '\n';
    }

    return 0;
}