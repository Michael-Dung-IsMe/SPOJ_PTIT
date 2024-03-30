#include <iostream>
#include <string>
using namespace std;

void solve(){
	int t; cin >> t;
	while(t--){
		int x, R; string S;
		cin >> x >> R >> S;
		cout << x << ' ';
		for(decltype(S.size()) i = 0; i < S.size(); ++i){
			int k = R;
			while(k--) cout << S[i];
		}
		cout << '\n';
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
