#include <iostream>

using namespace std;

void solve(){
	int n, cnt = 0; cin >> n;
	int a[n+2];
	for(int i = 0; i < n; ++i) cin >> a[i];
	for(int i = 0; i < n-1; ++i){
		if(a[i] != a[i+1])
			++cnt;
	}
	cout << cnt;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
