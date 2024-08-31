#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
void solve(){
    int n,m;cin>>n>>m;
   vector<vector<int>> a(n, vector<int>(m));

for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
     bool f;
    do {
        f= false;
        vector<vector<int>> b = a;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int top = (i > 0) ? a[i - 1][j] : 0;
                int left = (j > 0) ?a[i][j - 1] : 0;
                int bottom = (i < n - 1) ? a[i + 1][j] : 0;
                int right = (j < m - 1) ? a[i][j + 1] : 0;

                int m= max({top, left, bottom, right});
                if (a[i][j] > m) {
                    b[i][j] = m;
                    f = true;
                }
            }
        }

        
        a = b;
    } while (f);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;

while(t--){
solve();
}
return 0;
}