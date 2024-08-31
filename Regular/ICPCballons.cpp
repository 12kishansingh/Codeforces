#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
    int n;cin>>n;
    string s;cin>>s;
    vector<char>v;
    int ans=0;
    for(int i=0;i<n;i++){
        //int n=s[i]+'0';
        if(find(v.begin(), v.end(),s[i])!=v.end()){// check if char is already present or not 
            ans+=1;
        }
        else{
            v.push_back(s[i]);
            ans+=2;
        }  
}
cout<<ans<<endl;
}
return 0;
}