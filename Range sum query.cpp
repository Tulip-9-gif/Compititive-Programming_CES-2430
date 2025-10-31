#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int q;
    cin >> s >> q;

    int n = s.size();
    vector<int> prefix(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + (s[i - 1] == 'a');
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << "\n";
    }
}
