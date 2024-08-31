#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    vector<int> q(n);
    for (auto &x : q)
        cin >> x;
    vector<int> mn, mx;

    set<int> s, s1;
    for (int i = 1; i <= n; i++)
    {
        s.insert(i);
        s1.insert(i);
    }
    for (int i = 0; i < n; i++)
    {
        if (s.find(q[i]) != s.end())
        {
            mn.push_back(q[i]);
            s.erase(q[i]);
        }
        else
        {
            mn.push_back(*s.begin());
            s.erase(*s.begin());
        }
    }
    for (auto x : mn)
    {
        cout << x << " ";
    }
    cout << endl;
    int prev = 0;
    for (int i = 0; i < n; i++)
    {

        if (s1.find(q[i]) != s1.end())
        {
            mx.push_back(q[i]);
            s1.erase(q[i]);
        }
        else
        {

            auto it = s1.upper_bound(prev);
            --it;
            mx.push_back(*it);
            s1.erase(*it);
        }
        prev = q[i];
    }
    for (auto x : mx)
    {
        cout << x << " ";
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