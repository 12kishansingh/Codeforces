#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;
void solve()
{
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int j = 0, sum = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        while (j < n && sum + a[j] <= t)
        {
            sum += a[j++];
        }
        ans = max(ans, j - i);
        sum -= a[i];
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    // cin>>t;
    t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}