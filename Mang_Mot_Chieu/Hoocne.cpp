#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long ll;


const int MOD = 1000000007;

int main() {
	int TC; cin >> TC ;
	while(TC--){
		int n, x; cin >> n >> x;
		int a[n];
		for(int i = 0; i<n; i++){
			cin >> a[i];
		}
		ll lt =1, res = 0;
		for(int i=0; i<n; i++){
			res = res * x + a[i];
			res %= MOD;
		}
//		ll lt =1, res = 0;
//		for(int i = n-1; i >=0; i--){
//			res += a[i] * lt;
//			res % MOD;
//			lt *= x;
//			lt %= MOD;
//		}
		
		cout <<res << endl;
	}
	return 0;
}
