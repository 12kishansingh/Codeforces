#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        vector<int> cnt(2, 0);
        for (int i = 0; i < s.length(); ++i)
        {
            cnt[s[i] - '0'] += 1;
        }
        for (int i = 0; i < s.length() + 1; ++i)
        {
            if (i == s.length() || cnt[1 - (s[i] - '0')] == 0)
            {
                cout << s.length() - i << endl;
                break;
            }
            cnt[1 - (s[i] - '0')] -= 1;
        }
    }
    return 0;
}
// int a[2]={0,0};
// for(int i=0;i<n;i++){
//     a[s[i]-'0']++;
// }
// for(int i=0;i<n;i++){
//     if(a[!(s[i]-'0')]>0){   // if 1 is there decrementing count of 0 or vice-versa
//         a[!(s[i]-'0')]--;
//     }
//     else{
//         ans=n-i;
//         break;
//     }
// }
