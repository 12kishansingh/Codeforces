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
    cin >> a;
    sort(all(a));
    vector<int> b;
    b.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        if (a[i] != b.back())b.push_back(a[i]);
    }

    if (b.size() == 1)
    {
        cout << "Alice" << endl;
        return;
    }
    vector<int>c;
    c.push_back(b[0]);
    for (int i = 1; i < b.size() - 1; i++)
    {
        c.push_back(b[i] - b[i - 1]);
    }
    int cnt = 1;
    for (int i = 0; i < c.size(); i++)
    {
        if (c[i] == 1)
        {
            cnt = 1 - cnt;
        }
        else
        {
            if (cnt==1){cout << "Alice" << endl; return;}
            else {cout << "Bob" << endl;return;}
        }
    }
    if (cnt%2==1){cout<<"Alice"<<endl;return;}
    else{cout<<"Bob"<<endl;return;}
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