#include <bits/stdc++.h>
using namespace std;

#define MULTI int _T; cin >> _T; while(_T--)
#define el '\n'
typedef long long ll;
typedef vector<ll> vi;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    MULTI {
        ll n, x;
        cin >> n >> x;
        vi a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll ans = 0;
        ll current_sum = 0;
        ll left = 0;

        for (ll right = 0; right < n; right++) {
            current_sum += a[right];

            while (current_sum > x) {
                current_sum -= a[left];
                left++;
            }

            ans += (right - left + 1);
        }

        cout << ans << el;
    }

    return 0;
}
