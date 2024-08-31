#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;

while(t--){
int n;
cin>>n;
vector<int >v(n);
map<int ,int   >mp;
for(int i=0;i<v.size();i++){
    cin>>v[i];
}
for(int i=0;i<v.size();i++){
    int  a;
    cin>>a;
    mp[v[i]]=a;
}
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
for(int i=0;i<v.size();i++){
    cout<<mp[v[i]]<<" ";
}cout<<endl;

}
return 0;
}