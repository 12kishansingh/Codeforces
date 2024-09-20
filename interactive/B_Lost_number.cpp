/**
 *    author:  ks888singh
 *    created: 13-09-2024 11:23:55
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)

const int M = 1e9 + 7;
vector<int> g = {4, 8, 15, 16, 23, 42};

void solve()
{
    vector<int> a(7);

    cout << "? 1 2" << endl;
    cout.flush();
    int q1;
    cin >> q1;

    cout << "? 2 3" << endl;
    cout.flush();
    int q2;
    cin >> q2;

    cout << "? 4 5" << endl;
    cout.flush();
    int q3;
    cin >> q3;

    cout << "? 5 6" << endl;
    cout.flush();
    int q4;
    cin >> q4;
    do
    {
        if (g[0] * g[1] == q1 &&
            g[1] * g[2] == q2 &&
            g[3] * g[4] == q3 &&
            g[4] * g[5] == q4)
        {
            a[1] = g[0];
            a[2] = g[1];
            a[3] = g[2];
            a[4] = g[3];
            a[5] = g[4];
            a[6] = g[5];
            break;
        }
    } while (next_permutation(all(g)));
    cout << "! ";
    for (int i = 1; i < 7; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout.flush();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
