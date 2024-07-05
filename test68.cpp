#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[25],i,n,L,K;
	cin >> n;
	for (i=0; i<n; i++) cin >> a[i];
		cin >> L >> K;
    for (i=L-1; i<L-1+K; i++)
    	cout << a[i] << " ";
}