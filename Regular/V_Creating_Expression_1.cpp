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
bool recur(int i, vector<int> &a, int m, int &sum)
{
    if (i >= a.size())
    {
        if (sum == m)
        {
            return true;
        }
        return false;
    }
    int temp = sum + a[i];
    int temp2 = sum - a[i];
    if(recur(i + 1, a, m, temp))return true;

    if(recur(i + 1, a, m, temp2))return true;
    return false;
    return false;
}

void solve()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> a(n);
    cin >> a;
    int sum = a[0];
    cout << (recur(1, a, m, sum) ? "YES" : "NO") << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}