#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll gcd(ll a, ll b){
	if(a == 0) return b;
	return gcd(b%a, a);
}

ll lcm(ll a, ll b){
	return (a * b)/gcd(a,b);
}

int main(){
	ios_base::sync_with_stdio(false);
	int cnt = 0;
	ll a[1000], b[1000];
	do{
		cnt++;
		cin >> a[cnt] >> b[cnt];
	}while(a[cnt] != 0 && b[cnt] != 0);
	for(int i = 1; i < cnt; ++i)
		cout << gcd(a[i], b[i]) << ' ' << lcm(a[i], b[i]) << "\n";
}
