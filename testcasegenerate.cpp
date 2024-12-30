#include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// ll mysol(ll n) {
//     ll ans = n;
//     if (n % 2 == 0) {
//         ll p = n / 2;
//         ans += p / 3 + bool(p % 3);
//     } else {
//         ll p = n / 2 + n % 2;
//         p++;
//         ans += p / 3 + bool(n % 3);
//     }
//     return ans;
// }

// ll bruteSol(ll n) {
//     ll ans = 1e18;
//     for (int i = 0; i <= n; ++i) {
//         for (int j = 0; j <= n; ++j) {
//             ll A = max(n - i * 3 - j, 0LL) + max(n - j * 2, 0LL) + n;
//             ans = min(ans, (A + 1) / 2 + i + j);
//         }
//     }
//     return ans;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     srand(time(NULL));
//     int t;
   
//     for (int test = 0; test < 100; ++test) {
//         ll n;
//         if (test < 10) {
//             n = (test % 2 == 0) ? 1 : 1000; 
//         } else {
//             // Randomized testing
//             n = rand() % 1000 + 1;
//           // n=5;

//         }
        
//         ll correct = bruteSol(n);
//         ll myans = mysol(n);
//         if (correct != myans) {
//             cout << "Test case failed:\n";
//             cout << "n = " << n << "\n";
//             cout << "Expected = " << correct << ", Got = " << myans << "\n";
//             return 0; 
//         }
//     }

//     cout << "All test cases passed!\n";
//     return 0;
// }


#include <random>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    T=rand()%2+1;
    cout<<T<<endl;
    srand(time(NULL));

    while(T--) {
        int N = rand() % 2 + 1;
        int K = rand() % 2+ 1;

        cout << N << " " << K << endl;

        

        for (int i = 0; i < K; ++i) {
            int L = rand() % N + 1;
            int R = rand() % N + 1;
            if (L > R) swap(L, R);
            int m = rand() % N + 1;
            cout<<L<<" "<<R<<" "<<m<<endl;
        }

        
    }

    return 0;
}