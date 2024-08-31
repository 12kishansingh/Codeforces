#include<iostream>
#include<iomanip> 
#include<string>
#include<vector>
#include<math.h>
#include<climits>
#include<algorithm>
using namespace std;
 
#define e97 1000000007
typedef long long ll; 
#define yes cout<<"YES\n" ;
#define no cout<<"NO\n" ;
#define fori(n) for(int i=0;i<n;i++) 
#define forj(n) for(int j=0;j<n;j++) 
#define parr(a,n) for(int i=0;i<n;i++) cout<<a[i] << " "; cout<<"\n"; 
                    
int main()
{
     long long a[200001];
     a[0]=0;

     for(int i=1;i<200001;i++){
        string s=to_string(i);
        int sum=0;
        forj(s.size()){
            sum+=s[j]-'0';
        }

        a[i]=a[i-1]+sum;
     }

        int t; 
        cin>>t; 
        while(t--){
     int n;
     cin>>n;
     cout<<a[n]<<"\n";
     
     
        }
    
    return 0;
}