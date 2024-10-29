#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int TC; cin >> TC ;
	while(TC--){
		int n, m; cin >> n >> m;
		int a[n];
		for(int i = 0; i<n; i++){
			cin >> a[i];
		}
		
		int p[n] = {0};
		for(int i = 0; i < m; i++){
			int x; cin >> x;
			p[x - 1] = 1;
		}
		for(int i = 0; i<n; i++){
			if(p[i] == 0) continue;
			int index = i;
			for(int j = i; j < n; j++){
				index++;
				if(p[i] == 0) break;
			}
			sort(a + i, a + index + 1);
			i = index;
		}
		bool check = true;
		for(int i = 0; i < n; i++){
			if(a[i] > a[i + 1]){
				check = false;
				break;
			}
		}
		if(check == true){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}
	cout << endl;
	return 0;
}
