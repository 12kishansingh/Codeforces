#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
    int a[3][3];vector<int>v;int total=0;
    for(int i=0;i<3;i++){int sum=0;
        for(int j=0;j<3;j++){
            cin>>a[i][j];
            sum+=a[i][j];
        }total+=sum;
        v.push_back(sum);
    }
    total/=2;
    for(int i=0;i<v.size();i++){
        v[i]=total-v[i];
    }
    a[0][0]=v[0];
    a[1][1]=v[1];
    a[2][2]=v[2];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(j!=2)cout<<a[i][j]<<" ";
        else cout<<a[i][j];
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