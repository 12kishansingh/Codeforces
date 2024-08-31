#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
for(int i=0;i<n;i++){
    int cnt=2;
    char has='#';
    char dot='.';
    if(i%2==1){
        has='.';
        dot='#';
    }
    while(cnt--){
        for(int j=0;j<n;j++){
            int curr=2;
            while(curr--){
                if(j%2==0){
                    cout<<has;
                }else{
                    cout<<dot;
                }
            }
        }
        cout<<endl;
    }
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