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
    if (n % 2)
    {
        vector<int> v(n);
        int ptr1= 0, ptr2 = n - 1;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2)
            {
                v[ptr1] = i;
                ptr1++;
            }
            else
            {
                v[ptr2] = i;
                ptr2--;
            }
        }
        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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