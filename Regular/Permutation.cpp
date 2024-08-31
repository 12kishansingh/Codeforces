#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
bool isPermutation(vector<int>a){
    for(int i=0;i<a.size();i++){
        if(a[i]<=0 || a[i]>a.size()){
            return false;
        }
    }
    set<int>s(a.begin(),a.end());
    return s.size()==a.size();
}
void solve(){
int n;cin>>n;

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