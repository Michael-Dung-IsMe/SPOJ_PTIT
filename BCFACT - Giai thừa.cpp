#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll giaithua(int n){
	if(n == 1) return 1;
	return n * giaithua(n - 1);
}

void solve(){
	int n;
	do{
		cin >> n;
		if(n == 0) break;
		cout << giaithua(n) << endl;
	}while(n != 0);
}

int main(){
	solve();
	return 0;
}
