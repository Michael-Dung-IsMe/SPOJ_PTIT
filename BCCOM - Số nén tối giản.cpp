#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int div(int n){
	int sum = 0;
	while(n){
		sum += n%10; n /= 10;
	}
	return sum;
}
 
int sum_num(int n){
	int k = div(n);
	if(k >= 10)
		return sum_num(k);
	return k;
}
 
void solve(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << sum_num(n) << "\n";
	}
}
 
int main(){
	solve();
	return 0;
}
