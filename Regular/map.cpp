#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }//mp.insert({4,4});
    //auto it=mp.find();
    //for(auto &x: mp){ cout<<x.first<<x.second<<endl;}
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<","<<it->second<<endl;
        //cout<< (*it).first<<(*it).second<<endl;
    }

    return 0;
}
