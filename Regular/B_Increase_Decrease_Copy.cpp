#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n + 1);
    for (int &i : a)
        cin >> i;
    for (int &i : b)
        cin >> i;
    int diff = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        diff = min(diff, abs(b[n] - a[i]));
    }
    for (int i = 0; i < n; i++)
    {
        if (abs(b[n] - a[i]) == diff)
        {
            a.push_back(a[i]);
            break;
        }
    }
    int ans = 1;
    for (int i = 0; i < n + 1; i++)
    {

        ans += (abs(a[i] - b[i]));
    }
    cout << ans << endl;
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