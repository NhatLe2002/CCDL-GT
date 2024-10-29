#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long ll;

int f[1001];
void ktao(){
	int fibo[20];
	fibo[0] = 0; fibo[1]=1;
	for(int i = 2; i<=19; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	for(int i = 0; fibo[i] <=100; i++){
		f[fibo[i]]=1;
	}
}

int main() {
	ktao();
	int TC; cin >> TC ;
	while(TC--){
		int n; cin >> n ;
		int a[n];
		for(int i = 0; i<n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			if(f[a[i]]==1){
				cout << a[i] << " ";
			}
		}
	}
	cout << endl;
	return 0;
}
