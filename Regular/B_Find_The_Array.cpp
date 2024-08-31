
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
    vector<int> a(n);

    ll s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i % 2 == 0)// sum of odd positions
            s += a[i];
    }
    ll sum = accumulate(all(a), 0LL);// ll of 0 also 
   
    if (s <= sum / 2)
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                a[i] = 1;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2)
                a[i] = 1;
        }
    }

    cout << a<< endl;
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