#include <iostream>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;

void solve(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n;
		set<int> se;
		for(int i = 0; i < n; ++i){
			cin >> x;
			se.insert(x);
		}
		cout << (*se.rbegin() - *se.begin()) * 2 << '\n';
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
