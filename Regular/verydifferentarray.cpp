#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);

        for (int i = 0; i < n; i++)
           { cin >> a[i];}
        sort(a.begin(), a.end());

        for (int i = 0; i < m; i++)
          { cin >> b[i];}
        sort(b.begin(), b.end(), greater<int>());
        int diff=0;
    

        for (int i = 0; i < a.size(); i++)
        {

            if (a[i] < b[i])
            {     
                diff += b[i] - *min_element(a.begin()+i, a.end()); 
            }
            else
            {
                diff += a[i] - *min_element(b.begin()+i, b.end());
                b[*min_element(b.begin()+i, b.end())]=999999999;
               // b[it]=999999999;
               // b.erase(b.begin()+it);
            }

        }
        cout << diff << endl;
    }
    return 0;
}