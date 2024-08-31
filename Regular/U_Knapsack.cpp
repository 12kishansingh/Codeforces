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

void rec(int i, vector<int> &w, vector<int> &v, int sum, int wg, int m, int &ans)
{ 
    if (i >= w.size())
    {
        if (wg <= m)
        {
            ans = max(ans, sum);
         
        }
        return;
    }
    

    rec(i + 1, w, v, sum + v[i], wg + w[i], m, ans);
    rec(i + 1, w, v, sum, wg, m, ans);
}
void solve()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> w(n), v(n);
    for(int i=0;i<n;i++){

        cin>>w[i]>>v[i];
    }
    int ans = INT_MIN;
    rec(0, w, v, 0, 0, m, ans);
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}