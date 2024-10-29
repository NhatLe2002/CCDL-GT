#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long ll;

int gcd(int a, int b){
	if(b==0) return a;
	return gcd(b, a%b);
}

const int maxn = 1000;
int a [maxn];

int main() {
	int TC; cin >> TC ;
	while(TC--){
		int n; cin >> n ;
		for(int i = 0; i<n; i++){
			cin >> a[i];
		}
		int res = 1;
		for(int i = 0; i< n; i++){
			for(int j = i + 1 ; i < n; i++){
				res = max(res, gcd(a[i], a[j]));	
			}
		}
		cout << res << endl;
		
	}
	return 0;
}
