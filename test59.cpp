#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[17],max,min,kol,n,i;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
		max=a[0];min=a[0];
	for (i=1; i<n; i++)
	{
		if (a[i]>max) max=a[i];
		if (a[i]<min) min=a[i];
	}
	kol=0;
	for (i=1; i<n; i++)
	if ((a[i]<max) && (a[i]>min)) kol++;
	cout << kol;
}