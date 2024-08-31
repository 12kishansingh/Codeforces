#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;

int subsets(int n){

int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

for(int i=0;i<(1<<n);i++){
    for(int j=0;j<n;j++){
        if(i>>j & 1){
            cout<<a[j]<<" ";
        }
    }cout<<endl;
}

}
void functions(int n){

__builtin_popcount(n);// no of 1s
__builtin_popcountll(n);// long lnog 
__builtin_clz(n);// leading  zero-- 00001 has 4 leading zeros
__builtin_ctz(n);// trailing zeros  --- 1223000 has 3 trailing zero
cout<<0b101<<endl;
cout<<(1<<2)<<endl;

}
int negation(int n){

        int l=0;
        while(n>>l)l++;
     
        cout<<((~n) &( (1<<l)-1));
    
    // ~5 (101)= 2(10)

}
void solve(){
    char ch='A';
    ch=ch|' ';// upper to lower case
    cout<<ch<<endl;
    char c='a';
    c=c&'_';// lower to upper case
    cout<<c<<endl;
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