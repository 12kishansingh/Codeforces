#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a, b;
  cin>>a>>b;

  long long ans = a / b;
  long long c = a - ans * b;
  while(c != 0) {
    a = b;
    b = c;
    long long buf = a / b;
    c = a - buf * b;
    ans += buf;
  }

  cout<<ans<<endl;

  return 0;
}