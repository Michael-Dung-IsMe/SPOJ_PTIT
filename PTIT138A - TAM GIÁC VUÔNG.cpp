#include <iostream>
using namespace std;

void solve(){
	int a, b, c;
	while(cin >> a >> b >> c){
		if(!a && !b && !c) break;
		if((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a))
			cout << "right\n";
		else cout << "wrong\n";
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
