#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[15],i,n,k,j;
	cin >> n;
	for (i=0; i<n; i++) cin >> a[i];
		k=1;
	for (i=0; i<n; i++)
	{
		for (j=0; j<a[i]; j++) cout << k;
			k=1-k;
	}
}