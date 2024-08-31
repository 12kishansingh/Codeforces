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
    int m;
    cin >> m;

    while (m--)
    {//cout<<m<<endl;
        string s;
        cin >> s;
        unordered_map<int, char> num;
        unordered_map<char, int> ch;
        int l = s.size();
        if (l == n)
        {int f=1;
            for (int i = 0; i < n; i++)
            {
                if (num.count(a[i]))
                {
                    if (num[a[i]] != s[i])
                    {
                    f=0;
                        break;
                    }
                }
                else
                {
                    num[a[i]] = s[i];
                }
                if (ch.count(s[i]))
                {
                    if (ch[s[i]] != a[i])
                    {
                        f=0;
                        break;
                    }
                }
                else
                {
                    ch[s[i]] = a[i];
                }
            }
            if(f)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


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