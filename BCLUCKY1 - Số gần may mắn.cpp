#include <iostream>
#define ll long long
using namespace std;

void solve(){
	ll n; cin >> n;
	int cnt = 0;
	while(n){
		if(n%10 == 4 || n%10 == 7) ++cnt;
		n /= 10;
	}
	if(cnt == 4 || cnt == 7) cout << "YES";
	else cout << "NO";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
