#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int m;
    cin >> m;
    vector<int>d(m);
    for (int i = 0; i < m; i++)
    {
        cin >> d[i];
    }
    map<int, int> mp;
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            mp[b[i]]++;
        }
        if (d[m - 1] == b[i])
        {
            f = 1;
        }
    }
    if (!f)
    {
        cout << "NO" << endl;
        return;
    }
    for (auto x:d)
    {
        mp[x]--;
    }
    for (auto &it : mp)
    {
        if (it.second > 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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