#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int maxn = 1000000;
int a[maxn];


int main() {
	int TC; cin >> TC ;
	while(TC--){
		int n; cin >> n ;
		int a[n];
		for(int i = 0; i<n; i++){
			cin >> a[i];
		}
		long long sum = 0 ;
		for(int i = 0; i < n; i++) sum += a[i];
		long long left = 0;
		bool check = false;
		for(int i = 0; i < n; i++){
			sum -= a[i];
			if(sum == left){
				cout << i << " ";
				check = true;
			}
			left += a[i];
		}
		if(check == false){
			cout << "-1" << endl;
		}
	}
	cout << endl;
	return 0;
}
