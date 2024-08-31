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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);

    cin>>a;

    int mx = *max_element(a.begin(), a.end());

   while(m--){
        char ch;
        int l, r;
        cin >> ch >> l >> r;

        if (mx >= l && mx <= r)
        {
            if (ch == '+')
            {
                mx++;
            }
            else if (ch == '-')
            {
                mx--;
            }
        }

        cout << mx<< " ";
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