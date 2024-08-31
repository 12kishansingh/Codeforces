#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M = 1e9 + 7;

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(k), b(k);
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++)
    {
        cin >> b[i];
    }

    while (q--)
    {
        ll d;
        cin >> d;
        auto it = lower_bound(all(a), d) - a.begin();

        ll dis = a[it];
        ll time = 0;
        if (it - 1 >= 0)
        {
            time = b[it - 1];
            
        }
        ll t_diff = b[it];
        if (it - 1 >= 0)
        {
            t_diff -= b[it - 1];
            dis -= a[it - 1];
            d -= a[it - 1];
        }
        ll add = (d * t_diff) / dis;
        cout << time + add << " ";
    }
    cout << endl;
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