#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    while(tc--){
        int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
           int m = INT_MIN;
            for (int k = start; k <= end; k++) {
               m = max(m,arr[k]);
            }
            cout <<m<<" ";
        }
    }
    }
    return 0;
}

