#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
bool check( char s){
    return (s=='d' || s=='c' || s=='b');
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;

while(t--){
int n;
cin>>n;
string s;
cin>>s;

vector<string> v;
for(int i=0;i<n;i++){
    if(check(s[i]) && i+1<n &&  !check(s[i+1]) ){
        string word="";
        word.push_back(s[i]);
        word.push_back(s[i+1]);
        v.push_back(word);
        i++;
    }
    else{
        string word=v.back();
        v.pop_back();
        word.push_back(s[i]);
        v.push_back(word);
    }
}
for(int i=0;i<v.size();i++){
    if(i!=v.size()-1){
        cout<<v[i]<<".";
    }
    else{
        cout<<v[i];
    }
}
cout<<endl;
}
return 0;
}