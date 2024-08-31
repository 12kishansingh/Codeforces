#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;

 vector<string>s;
for(int i=0;i<n;i++){
   
    string p;
    cin>>p;
    s.push_back(p);
}

set<char>s1;
set<char>s2;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==j){
            s1.insert(s[i][i]);
        }
        else{
            s2.insert(s[i][j]);
        }

    }
}
if(s1.size()==1 && s2.size()==1){
    cout<<"YES"<<endl;

}
else{
    cout<<"NO"<<endl;
}





return 0;
}