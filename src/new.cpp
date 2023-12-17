#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;

int n;
int a[100000];
int d[100000];
int m, l, r, v;
int i, j;

int main(){
	cin >> n;
	for(i = 1; i <= n; i++){
		cin >> a[i];
	}
	cin >> m;
	for(i = 1; i <= m; i++){
		cin >> l >> r >> v;
		d[l] += v;
		d[r + 1] -= v;
	}

	for (i = 1; i <= n; i++) {
        d[i] += d[i - 1];
        a[i] += d[i];
    }

	for(i = 1; i <= n; i++){
		cout << a[i] << " ";
	}
	return 0;
}