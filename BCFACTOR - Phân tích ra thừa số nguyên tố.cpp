#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	int n; cin >> n;
	int a[150], b[150] = {0}, cnt= 0;
	for(int i = 2; i*i <= n; ++i){
		if(!(n%i)){
			a[cnt] = i;
			while(!(n%i)){
				b[cnt]++;
				n /= i;
			}
			cnt++;
		}
	}
	if(n > 1){
		a[cnt] = n; b[cnt++]++;
	}
	for(int i = 0; i < cnt; ++i)
		cout << a[i] << " " << b[i] << "\n";
}
