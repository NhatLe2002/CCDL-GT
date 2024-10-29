#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int maxn = 1000000;
int a[maxn];


int main() {
	int TC; cin >> TC ;
	while(TC--){
		int n; cin >> n;
		for(int i = 0; i<n; i++){
			cin >> a[i];
		}
		int ans = a[0];
		for(int i = 1; i< n; i++){
			ans ^= a[i];
		}
		cout << ans << endl;
	}
	cout << endl;
	return 0;
}
