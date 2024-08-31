#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M = 1e9 + 7;
template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
    for (auto &it : v)
        cin >> it;
    return istream;
}
template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
    for (auto &it : c)
        cout << it << " ";
    return ostream;
}

void solve()
{
    int n;
    cin >> n;
    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        m[a]++;
    }
    priority_queue<pair<int, int>> p;
    for (auto &x : m)
    {
        p.push({x.second, x.first});
    }
    int ans = n;
    while (p.size() >= 2)
    {
        auto it = p.top();
        int cnt1 = it.first;
        int val1 = it.second;
        p.pop();
        auto it1=p.top();
        int cnt2 = it1.first;
        int val2 = it1.second;
        p.pop();
        cnt1--;
        cnt2--;
        ans -= 2;
        if (cnt1)
        {
            p.push({cnt1, val1});
        }
        if (cnt2)
        {
            p.push({cnt2, val2});
        }
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