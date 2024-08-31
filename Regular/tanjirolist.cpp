#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_map<int,int>mp;
    for(int i=n-1;i>=0;i--){
        if(mp.find(a[i])==mp.end()){
            mp[a[i]]=i;
        }
    }
    // for(auto x: mp){
    //     cout<<x.first<<","<<x.second<<endl;
    // }
    vector<int>v;
    for(int i=0;i<n;i++){
        if(i==mp[a[i]]){
           v.push_back(a[i]); 
        }
    }
    cout<<v.size()<<endl;
    for(auto x: v){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
//input:
//6
//1 5 5 1 6 1
//output:
//3
//5 6 1
