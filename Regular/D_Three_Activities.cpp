#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;
vector<int> max3(vector<int> &a)
{
    int m1 = -1, m2 = -1, m3 = -1;
    for (int i = 0; i < a.size(); i++)
    {
        if (m1 == -1 || a[i] > a[m1])
        {
            m3 = m2;
            m2 = m1;
            m1 = i;
        }
        else if (m2 == -1 || a[i] > a[m2])
        {
            m3 = m2;
            m2 = i;
        }
        else if (m3 == -1 || a[i] > a[m3])
        {
            m3 = i;
        }
    }
    return {m1, m2, m3};
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    vector<int> best_a = max3(a);
    vector<int> best_b = max3(b);
    vector<int> best_c = max3(c);
    int cnt = 0;
    for (int x : best_a)
    {
        for (int y : best_b)
        {
            for (int z : best_c)
            {
                if (x != y && x != z && y != z)
                {
                    cnt = max(cnt, a[x] + b[y] + c[z]);
                }
            }
        }
    }
    cout << cnt << endl;
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