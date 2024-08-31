#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
for (auto &it : v)
cin >> it;
return istream;
}
template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
for (auto &it : c)
cout << it <<" ";
return ostream;
}


void permute(){
int n;cin>>n;
vector<int>a(n);
 
 for(int i=0;i<6;i++)
 {
    a[i]=i+1;
 }
 bool ok=false;
 do
 { 
    vector<int>b(6);
    vector<int>c(6);

   for(int i=0;i<6;i++)
   {
     b[i]=a[i];
     c[i]=a[i]+1;
     if(c[i]>6)c[i]=1;
   }

   for(int i=0;i<5;i++){c[i+1]+=c[i];b[i+1]+=b[i];}

   for(int i=0;i<6;i++)
   for(int j=i;j<6;j++)
   {

     int p=b[i];
     int q=c[i];
     if(j>0){p-=b[j];q-=c[j];}
     if(p==q){ok=true;for(auto &x:a)cout<<x<<" ";cout<<endl; cout<<i<<" "<<j<<endl;}
   }


 } while (next_permutation(a.begin(),a.end()));
 
 
 
 if(ok)cout<<"Wrong"<<endl;
 else cout<<"Right"<<endl;

}
void solve(){
    int n;cin>>n;
    vector<int>a(n);
    cin>>a;
    for(int i=0;i<n;i++){
        if(a[i]==n)a[i]=1;
        else a[i]++;
    }
    cout<<a<<endl;
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