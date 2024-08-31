#include <iostream>
#include <vector>
#include <set>
using namespace std;

// Function to compute Grundy number for a state
int computeGrundy(int n, vector<int>& grundy) {
    if (grundy[n] != -1) return grundy[n];  // Memoization
    set<int> mexSet; // To store the mex values
    for (int i = 1; i <= n; ++i) {
        mexSet.insert(computeGrundy(n - i, grundy));
    }
    
    // Find the minimum excludant (mex)
    int g = 0;
    while (mexSet.count(g)) g++;
    grundy[n] = g; // Store Grundy number
    return grundy[n];
}

int main() {
    int n; // Number of piles or game size
    cin >> n;
    vector<int> grundy(n + 1, -1); // Grundy numbers initialized to -1 (not computed)
    grundy[0] = 0; // Base case: empty state is losing

    // Calculate Grundy numbers for all states up to `n`
    for (int i = 1; i <= n; ++i) {
        computeGrundy(i, grundy);
    }

    // Output Grundy numbers (optional)
    for (int i = 0; i <= n; ++i) {
        cout << "Grundy[" << i << "] = " << grundy[i] << endl;
    }

    // Determine the XOR sum to find if the initial state is winning or losing
    int xorSum = 0;
    for (int i = 1; i <= n; ++i) {
        xorSum ^= grundy[i];
    }

    if (xorSum != 0) {
        cout << "First player has a winning strategy." << endl;
    } else {
        cout << "Second player has a winning strategy." << endl;
    }

    return 0;
}
