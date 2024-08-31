#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n,m;cin>>n>>m;
char ch[n][m];
for (int i = 0 ; i < n ; ++ i){
		cin >> ch[i];
	}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(ch[i][j]=='-')cout<<'-';
        else if((i+j)%2)cout<<'W';
        else cout<<'B';
    }cout<<endl;
}
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
//cin>>t;
t=1;
while(t--){
solve();
}
return 0;
}

