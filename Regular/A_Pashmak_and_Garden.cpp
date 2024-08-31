#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
if(  (abs(x1-x2)!=0 && abs(y1-y2)!=0) && abs(x1-x2)!=abs(y1-y2)){
    cout<<-1<<endl;return;
}
if(abs(x1-x2)==abs(y1-y2) && ((x1<x2 && y1<y2)||(x1>x2 && y1>y2))){
int x3=min(x1,x2)+abs(x1-x2);
int y3=min(y1,y2);
int x4=min(x1,x2);
int y4=min(y1,y2)+abs(y1-y2);
cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
}
if(abs(x1-x2)==abs(y1-y2)&& ((x1<x2 && y1>y2)|| (x1>x2 && y1<y2))){
int x3=x1;
int y3=y2;
int x4=x2;
int y4=y1;
cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;

}
if((abs(x1-x2)==0 ) && abs(y1-y2)){
    int x3=min(x1,x2)+abs(y1-y2);
    int x4=max(x1,x2)+abs(y1-y2);
    int y3=min(y1,y2);
    int y4=max(y1,y2);
    cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
}
if(abs(y1-y2)==0 && abs(x1-x2)){
    int x3=min(x1,x2);
    int x4=max(x1,x2);
    int y3=min(y1,y2)+abs(x1-x2);
    int y4=max(y1,y2)+abs(x1-x2);
    cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
}
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
//cin>>t;
t=1;
while(t--){
solve();
}
return 0;
}