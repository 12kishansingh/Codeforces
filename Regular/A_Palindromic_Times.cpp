#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){string s;
cin>>s;
int n=s.length();int cnt=0;int space=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==' ')space=i;break;
        }int first=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' ')first=i;break;
        }
        if(first<space){cout<< space-1;return;}
        else 
        {
            for(int i=first;i>=0;i--){
                if(s[i]!=' ')cnt++;
            }cout<<cnt;return;
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