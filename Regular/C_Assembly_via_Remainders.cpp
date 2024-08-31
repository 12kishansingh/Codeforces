#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    vector<int> v(n);
    random_device ran;
    mt19937 g(ran());
    uniform_int_distribution<int> d(1, 1000000);
    v[0] = d(g);
    for (int i = 1; i < n; i++)
    {
        v[i] = a[i - 1] + v[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
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
