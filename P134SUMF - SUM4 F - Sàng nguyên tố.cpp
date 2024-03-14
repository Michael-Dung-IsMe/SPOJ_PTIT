#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int k, a[100005];

int sang(int n){
	int cnt = 0;
	for(int i = 2; i <= n; ++i)	a[i] = 1;
	for(int i = 2; i <= n; ++i){
		if(!a[i]) continue;
		else{
			a[i] = 0;	cnt++;
			if(cnt == k) return i;
			for(int j = i * i; j <= n; j += i){
				if(!a[j]) continue;
				a[j] = 0;	cnt++;
				if(cnt == k) return j;
			}
		}
	}
	return 0;
}

int main(){
	int n; cin >> n >> k;
	cout << sang(n);
}
