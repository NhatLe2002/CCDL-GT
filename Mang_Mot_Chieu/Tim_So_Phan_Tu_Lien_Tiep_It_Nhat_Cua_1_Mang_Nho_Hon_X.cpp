#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int maxn = 1000000;
int a[maxn];


int main() {
	int TC; cin >> TC ;
	while(TC--){
		int n, x; cin >> n >> x;
		for(int i = 0; i<n; i++){
			cin >> a[i];
		}
		int sum = a[0];
		int res = 1;
		int left = 0;
		for(int i = 1; i < n; i++){
			sum += a[i];
			while(sum > x){
				sum -= a[left];
				res = min(res, i - left + 1);
				left++;
			}
		}
		cout << left << endl;
	}
	cout << endl;
	return 0;
}
