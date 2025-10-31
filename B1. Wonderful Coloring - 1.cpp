#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        int cnt1 = 0, cnt2 = 0;
        for (auto it : mp) {
            int a = it.second;
            if (a == 1) cnt1++;
            else if (a >= 2) cnt2++;
        }

        int k = cnt2 + cnt1 / 2;
        cout << k << endl;
    }
    return 0;
}
