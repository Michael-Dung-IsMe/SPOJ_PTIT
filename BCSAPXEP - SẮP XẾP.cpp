#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

int cmp(const void *xp, const void *yp){
	return *(int *)xp - *(int *)yp;
}

void solve(){
	int n; cin >> n;
	int a[n+2];
	for(int i = 0; i < n; ++i)
		cin >> a[i];
/*Hàm sort trong STL  algorithm:
	sort(a, a + n);
*/

/*Bubble Sort:
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			if(a[i] < a[j])
				swap(a[i], a[j]);
		}
	}
*/

/*Quicksort
	qsort(a, n, sizeof(int), cmp);
*/

	for(int i = 0; i < n; ++i)
		cout << a[i] << endl;
}

int main(){
	solve();
	return 0;
}
