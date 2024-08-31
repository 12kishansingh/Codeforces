#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    if (n - (n / m + (n % m != 0)) <= k)
    {
        cout << "NO" << endl;
    }

    else
    {

        cout << "YES" << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}