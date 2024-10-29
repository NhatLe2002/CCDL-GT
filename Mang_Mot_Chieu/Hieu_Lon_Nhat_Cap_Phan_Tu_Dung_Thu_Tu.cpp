#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long ll;

int main() {
	int TC; cin >> TC ;
	while(TC--){
		int n; cin >> n ;
		int a[n];
		for(int i = 0; i<n; i++){
			cin >> a[i];
		}
		int min_value = -1e9;
		int min_point = a[0];
		for(int i = 1; i < n; i++){
			if(a[i] - min_point > min_value ){
				min_value = a[i] - min_point;
			}
			if(a[i] < min_point){
				min_point = a[i];
			}
		}
		if(min_value == -1e9) cout << "-1\n";
		else cout << min_value;
	}
	
	cout << endl;
	return 0;
}
