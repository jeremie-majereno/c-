#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[15],n,i,k,max;
	cin >> n;
	for (i=0; i<n; i++) cin >> a[i];
		k=0; max=0;
	for (i=0; i<n-1; i++)
	{
		if (a[i]<a[i+1]) k=k+1;
		else {
			if (k>max) max=k ;
			k=0;
		}
	}
	if (k>max) max=k;
	cout << max;
}