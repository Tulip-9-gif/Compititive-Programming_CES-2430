#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "\nAll subarrays are:\n";

    // Base way: 2 nested loops
    for (int i = 0; i < n; i++) {          // starting point
        for (int j = i; j < n; j++) {      // ending point
            cout << "[";
            for (int k = i; k <= j; k++) { // print elements from i to j
                cout << arr[k];
                if (k < j) cout << ",";
            }
            cout << "]\n";
        }
    }

    return 0;
}
