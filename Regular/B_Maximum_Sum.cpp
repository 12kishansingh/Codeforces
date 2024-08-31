// Online C++ compiler to run C++ program online//
//testing
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long

int mod=1000000007;
// int modulo(int x,int N){
//     return (x % N + N) %N;
// }
int maxSubArraySum(vector<int>&a)


{
    int size=a.size();
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

signed main() {
   int t;
   cin>>t;
   
   while(t--){
       int n,k;
       cin>>n>>k;
       
       vector<int>a(n,0);
       int sm=0;
       for(int i=0;i<n;i++){
           cin>>a[i];
           sm+=a[i];
       }
       int maxi=maxSubArraySum(a);
       maxi=max(maxi,0LL);
       
       k--;
       vector<int>ans;
       ans.push_back(maxi);
       while(k--){
           maxi+=maxi;
           maxi=(maxi%mod+mod)%mod;
           ans.push_back(maxi);
       }
       maxi=0;
       for(auto i:ans){
           maxi+=i;
       }
      // cout<<maxi<<" "<<sm<<endl;
       maxi+=sm;
      // cout<<maxi<<endl;
    //   int mod=modulo(maxi,1000000007);
    maxi=(maxi%mod+mod)%mod;
       cout<<maxi<<endl;
   }
    return 0;
}