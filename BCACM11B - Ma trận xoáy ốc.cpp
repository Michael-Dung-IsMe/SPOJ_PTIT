#include <iostream>
#define ll long long
#define MOD 1000000007
using namespace std;

void solve(){
	int t; cin >> t;
	while(t--){
		int n, x, y; cin >> n >> x >> y;
		int cnt = 0, ok = 0;
	 	int hang1 = 0, hang2 = n-1, cot1 = 0, cot2 = n-1;
	 	while(cnt < n*n){
	 		for(int i = cot1; i <= cot2; ++i){
	 			++cnt;
	 			if(hang1 == x-1 && i == y-1){ ok = cnt; break; };
	 		}
	 		if(ok) break;
	 		++hang1;
	 		for(int i = hang1; i <= hang2; ++i){
	 			++cnt;
	 			if(i == x-1 && cot2 == y-1){ ok = cnt; break; };
	 		}
	 		if(ok) break;
	 		--cot2;
	 		for(int i = cot2; i >= cot1; --i){
	 			++cnt;
	 			if(hang2 == x-1 && i == y-1){ ok = cnt; break; };
	 		}
	 		if(ok) break;
	 		--hang2;
	 		for(int i = hang2; i >= hang1; --i){
	 			++cnt;
	 			if(i == x-1 && cot1 == y-1){ ok = cnt; break; };
	 		}
	 		if(ok) break;
	 		++cot1;
	 	}
	 	cout << ok << '\n';
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
