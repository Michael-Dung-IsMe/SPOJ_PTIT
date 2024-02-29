#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
 
void solve(){
	int t; cin >> t;
	while(t--){
		ll n, k, revv = 0; cin >> n; k = n;
		while(k){
			revv = revv*10 + k%10;
			k /= 10;
		}
		if(n == revv)
			cout << "YES\n";
		else cout << "NO\n";
	}
}
 
int main(){
	solve();
	return 0;
}
