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

vector<int>segtree;

void build(vector<int>&a, int start,int end,int idx){// build the segment tree ,
//time complexity-O(n)
if(start==end){
    segtree[idx]=a[start];
    return;
}
int mid=(start+mid)/2;
int left=2*idx,right=2*idx+1;
build(a,start,mid,left);// left index
build(a,mid+1,end,right);// right index
segtree[idx]=segtree[left]+segtree[right];
}

void update(vector<int>&a,int start,int end,int idx, int pos,int val){//update at a given pint in segment tree
// time complexity-O(log(n));
if(start==end){
    a[pos]=val;
    segtree[idx]=a[pos];
    return;
}
int mid=(start+end)/2;
if(mid<=pos){
update(a,start,mid,2*idx,pos,val);
}
else{
    update(a,mid+1,end,2*idx+1,pos,val); 
}
segtree[idx]=segtree[2*idx]+segtree[2*idx+1]; 
}

int query(int start,int end,int idx, int l,int r){//give sum from l to r
// complete overlap
if(l>=start && end<=r){
    return segtree[idx];
}
// disjoint
if(l>end|| r<start){
    return;
}
int mid=(start+end)/2;
int leftans=query(start,mid,2*idx,l,r);
int rightans=query(mid+1,end,2*idx+1,l,r);
return leftans+rightans;
}

void solve(){
int n;cin>>n;
segtree.resize(2*n+1);
vector<int>a(n);
cin>>a;

build(a,0,n-1,1);

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