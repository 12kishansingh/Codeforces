#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        long long sum = 0; // Using long long to avoid overflow
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }

        // Check if the sum is even
        if (sum % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
