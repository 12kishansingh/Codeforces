#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
bool isnum(string s){bool ans=false;
    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57){
            ans=true;
        }
        else{
            return false;
        }
    }
    return ans;
}
void solve(){
int n;cin>>n;int cnt=0;
string s[11]={"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
while(n--){
    string a;
    cin>>a;
    if(isnum(a)){
        int num=stoi(a);
        if(num<18)cnt++;
    }
    else{
        for(int i=0;i<11;i++){
            if(a==s[i])cnt++;
        }
    }
}
    cout<<cnt<<endl;
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