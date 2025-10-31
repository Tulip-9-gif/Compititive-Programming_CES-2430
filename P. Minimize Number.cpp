#include<iostream>
using namespace std;
int main() {
    int N;
   cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];  }
       int operations = 0;
     while (true) {
        bool allEven = true;
        for (int i = 0; i < N; i++) {
            if (A[i] % 2 != 0) {
                allEven = false;
                break;
            }
    }   cout << operations << endl;
     }
   return 0;
}
