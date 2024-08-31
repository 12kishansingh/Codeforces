#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
void solve(){
int x;cin>>x;
vector<int>v(32);
for(int i=29;i>=0;i--){// converting into binary number
    int y=(x>=(1<<i));
    v.push_back(y);
    x%=(1<<i);
}
for(int i=0,j;i<32;){
    if(!v[i]){
        i++;
        continue;
    }
    j=i+1;
    while(v[j]){
        v[j]=0;
        j++;
    }
    if(j>i+1){
        v[j]=1;
        v[i]=-1;
    }
    i=j;
}
cout<<32<<endl;
for(auto it:v){
    cout<<it<<" ";
}cout<<endl;
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