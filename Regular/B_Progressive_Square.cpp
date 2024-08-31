#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;
void solve()
{
    int n, c, d;
    cin >> n >> c >> d;
    vector<int>a(n*n);
    for (int i = 0; i < n * n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int b[n][n];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = a[0] + i * c + j * d;
            v.push_back(b[i][j]);
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n * n; i++)
    {
        if (v[i] != a[i])
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