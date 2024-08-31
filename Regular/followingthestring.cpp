#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
int main(){
int t;
cin>>t;

while(t--){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
vector<int>v(26,0);
string s="";
for(int i=0;i<n;i++){
    char ch='a';
        for(int j=0;i<26;j++){
            if(a[i]==v[j]){
                 s.push_back(char(ch+j));
                v[j]++;
                break;
            }
        }
        
}
cout<<s<<endl;


}
return 0;
}