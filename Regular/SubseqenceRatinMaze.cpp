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
// rat in a maze 
vector<int> di{0,1,0,-1};
vector<int> dj{1,0,-1,0};
string dir="RDLU";
bool isvalid(int i,int j,int n,int m,vector<vector<int>>&a){
    if(i>=0 && j>=0 && i<n && j<m && a[i][j]==0){
        return true;
    }
    return false;
}
int count(int i,int j,int n,int m,vector<vector<int>>&arr,string &path){

    if(i==n-1 && j==m-1){
        cout<<path<<endl;
        return;
    }
    // int ans=0;
    // if(i==n-1 &&  j==m-1){// 
    //     return 1;
    // }
    // if(i<0 || j<0|| i>=n || j>=m|| arr[i][j]==1){// a[i][j]=1 for trap
    //     return 0;
    // }
    arr[i][j]=1;

    // ans+=count(i,j+1,n,m,a);
    // ans+=count(i+1,j,n,m,a);
    // ans+=count(i-1,j,n,m,a);
    // ans+count(i,j-1,n,m,a);

    
    for(int a=0;a<4;a++){
        path.push_back(dir[a]);
        count(i+di[a],j+dj[a],n,m,arr,path);
        path.pop_back();
    }arr[i][j]=0;

  //  return ans;



}

void gen(vector<int>&res,int idx, int n,vector<int>a){

    if(idx==n){
        for(auto x: res){
            cout<<x<<" ";
        }cout<<endl;
        return;
    }
    // pick 
    res.push_back(a[idx]);
    
    gen(res,idx+1,n,a);
    res.pop_back();// backtrack
    
    // not pick
    gen(res,idx+1,n,a);
    /*
    // for target sum
    gen(sum+a[idx],idx+1,n,a);// no need of backtracking here 
    gen(sum,idx+1,n,a);
    
    */
}

void solve(){
int n;cin>>n;
vector<int>a(n);
cin>>a;

vector<int>ans;
gen(ans,0,n,a);


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