#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],max,n,i;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
		max=a[0];
	for (i=0; i<n; i++)
		if (a[i]>max) max=a[i];
	cout << max;
}