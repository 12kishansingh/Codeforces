#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {

        vector<string>v;
        for(int i=0;i<3;i++){
            string s;
            cin>>s;
            v.push_back(s);
        }
        int A = 3;
        int B = 3;
        int C = 3;
        for (int i = 0; i < 3; i++)
        {
            for(int j=0;j<3;j++){
                 if (v[i][j] == 'A')
                A--;
            else if (v[i][j] == 'B')
                B--;
            else if (v[i][j] == 'C')
                C--;
            }
           
        }
        if (A)
            cout << 'A' << endl;
        else if (B)
            cout << 'B' << endl;
        else if (C)
            cout << 'C' << endl;
    }
    return 0;
}