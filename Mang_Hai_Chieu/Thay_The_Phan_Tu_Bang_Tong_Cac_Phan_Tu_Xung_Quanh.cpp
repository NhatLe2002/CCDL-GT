#include <bits/stdc++.h>
using namespace std;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[500][500];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		int res[500][500];
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				long long sum = a[i][j];
				for(int k = 0; k < 8; k++){
					if( i + dx[k] >= 0 && i + dx[k] < n
					&& j + dy[k] >= 0 && j + dy[k] < m){
						sum += a[i + dx[k]][j + dy[k]];
					}
				}
				res[i][j] = sum;
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cout << res[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
