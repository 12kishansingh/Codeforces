#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void SieveOfEratosthenes(int n)
{
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true) {
			
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}

	// Print all prime numbers
	for (int p = 2; p <= n; p++)
		if (prime[p])
			cout << p << " ";
}
int div(int n){// divisors of n--- nroot(n)
    int cnt=0;
for(int i=1;i*i<=n;i++){
    if(n%i==0){
        cnt++;
        if(i!=n/i)cnt++;
    }
}
return cnt;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int n;cin>>n;
// vector<int>d(n+1);
// for(int i=1;i<=n;i++){
//     for(int j=i;j<=n;j+=i){
//         d[j]++;// multiples of n -- nlog n
//     }
// }
// for(int i=1;i<=n;i++){
//     cout<<d[i]<<" ";
// }



return 0;
}