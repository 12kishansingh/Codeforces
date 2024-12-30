#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;

vector<int>segtree;
int merge(int l,int r){
    return l+r;
}
void build(vector<int>&a,int strt,int end,int idx){
    // O(n)
    if(strt==end){
        segtree[idx]=a[strt];
        return; 
    }
    int mid=(strt+end) /2;
    build(a,strt,mid,2*idx);// left=2*idx
    build(a,mid+1 ,end,2*idx+1);//right=2*idx+1
    segtree[idx]=merge(segtree[2*idx],segtree[2*idx+1]);
}
void update(vector<int>&a,int strt,int end,int idx,int pos, int val){
    //O(log(n))
    if(strt==end){
        a[pos]=val;
        segtree[idx]=a[pos];
        return;
    }
    int mid=(strt+end)/2;
    if(mid>=pos){
        update(a,strt,mid,2*idx,pos,val);
    }
    else{
        update(a,mid+1,end,2*idx+1,pos,val);
    }
    segtree[idx]=merge(segtree[2*idx],segtree[2*idx+1]);
}
int query(int strt,int end,int idx, int l,int r){
    //complete opverlap
    if(strt>=l && end<=r){
        return segtree[idx];
    }
    // disjoint
    if(strt>r || end<l){
        return 0;
    }
    //partial
    int mid=(strt+end)/2;
    int lans=query(strt,mid,2*idx,l,r);
    int rans=query(mid+1,end,2*idx+1,l,r);
    return merge(lans,rans);
}

void solve(){
int n;cin>>n;
vector<int>a(n);
for(auto &x:a)cin>>x;

segtree.resize(2*n+1);



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