#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a,b,c,d;
int x,y,x1,y1,x2,y2;
cin>>x>>y>>x1>>y1>>x2>>y2;
int X,Y=0;
X=abs(x2-x1);
Y=abs(y2-y1);
if((a<=X && b<=X) || (c<=Y && d<=Y)){
    cout<<"Yes"<<endl;
}
else {
    cout<<"No"<<endl;
}
}
return 0;
}