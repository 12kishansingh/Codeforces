#include <iostream>
using namespace std;

long long power(long long x, long long y, long long p) {// binary exponentiation
    long long res = 1;
    x = x % p;//if x is 1e18
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;// for long (res*x*1ll)%p
            // res=add(res,x); if m is very large;
        y = y >> 1;//right shift
        x = (x * x) % p;
        // x=add(x,x); if M <=1e18
    }
    return res;
} 
long long add(long long a,long long b,long long m){//binary multiply  if M is very large i.e. 1e18
    long long ans=0;
    while(b>0){
        if(b&1){
            ans=(ans+a)%m;        }
    }
    b=b>>1;
    a=(a+a)%m;
}
// if b is very large --- ETF, Euler theorem ,, a power b power c --(a)^(b^c);
//ETF- of n= n* product(1-1/distinct prime factor)


int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, n, m, k;
        cin >> a >> n >> m >> k;
        long long x = a % m;
        x = power(x, n, m);
        for (int i = 2; i <= k; i++) {
            x = power(x, n, m);
        }
        cout << x << endl;
    }
    return 0;
}
// large exponenti
//a<=1e18 ---take mod 
//m=1e18 --- binary multiplication
/*

*/