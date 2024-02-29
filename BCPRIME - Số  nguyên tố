#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int checkP(int n){
	if(n == 2 || n == 3) return 1;
	if(n == 1 || !(n%2) || !(n%3)) return 0;
	for(int i = 5; i*i <= n; i += 6){
		if(!(n%i) || !(n%(i+2)))
			return 0;
	}
	return 1;
}
 
int main(){
	int n; cin >> n;
	if(checkP(n))
		cout << "YES";
	else
		cout << "NO";
}
