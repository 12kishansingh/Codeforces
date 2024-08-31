#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> a(n);
    multiset<int> s;
    for (auto &x : a)
    {
        cin >> x;
        s.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        int t;
        cin >> t;
        auto it = s.upper_bound(t);
        if (it == s.begin())
        {
            cout << -1 << endl;
        }
        else
        {
            --it;
            cout << *it << endl;
            s.erase(it);
        }
    }
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