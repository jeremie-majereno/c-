#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[8],i,n,j,b,k;
	cin >> n;
	for (i=0; i<n; i++) cin >> a[i];
	cin >> b >> k;
    j=(b+k)%n;
    if (j==0) cout << a[n-1];
    else cout << a[j-1];
}