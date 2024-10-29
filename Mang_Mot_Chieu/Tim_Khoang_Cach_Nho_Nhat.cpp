#include <bits/stdc++.h>
using namespace std;


int main() {
		int TC; cin >> TC ;
	while(TC--){
		int n; cin >> n;
		int a[n];
		int dapan = INT_MAX;
		for(int i = 0; i<n; i++){
			cin >> a[i];
		}
		for(int i = 0; i<n-1; i++){
			for(int j = i+1; j<n; j++){
				dapan = min(dapan, max(a[i], a[j]) - min(a[i], a[j]));
//				if(a[i] >= a[j] ){ 
//					if(a[i] - a[j] < dapan){
//						dapan = a[i] - a[j];
//					}
//				}else{
//					if(a[j] - a[i] < dapan){
//						dapan = a[j] - a[i];
//					}
//				}
			}
		}
		cout << dapan << endl;
	}
	return 0;
}
