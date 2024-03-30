#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; cin >> s;
		reverse(s.begin(), s.end());
		if(s.find("68") == 0)
			cout << "1\n";
		else 
		cout << "0\n";
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
