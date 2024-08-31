#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
ll sum=(1LL*n*(n+1))/2;
if(sum%2==1){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
    ll half=sum/2;
    vector<int>v,v1;
    int i=1,j=n;
    ll sum=0;
    int move=0;
    // 1 2 3 4 5 6 7 
    while(sum<=half){
        if(move==0 && sum+j<=half){
            v.push_back(j);
            sum+=j;
            j--;
            move++;
        }
        else{
            if(sum+i<=half){
                v.push_back(i);
            sum+=i;
            i++;
            move--;
            }
            else{
                break;
            }
        }
    }

    for(int idx=i;idx<=j;idx++){
        v1.push_back(idx);
    }
    cout<<v.size()<<endl;
    for(auto x:v){
        cout<<x<<" ";
    }cout<<endl<<v1.size()<<endl;
    for(auto x:v1){
        cout<<x<<" ";
    }
}

}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
t=1;

while(t--){
solve();
}
return 0;
}