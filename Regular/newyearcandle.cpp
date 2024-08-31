#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    //4 2 ->2 ->1: 4+2+1
    //6 3 ->2 ->2%3!=0: 6+2
    int ans=a;
    while(a>=b){
        ans+=a/b;
        a=a/b+a%b;//remains is dividend plus remainder
        
    }
    cout<<ans<<endl;
return 0;
}