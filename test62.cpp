#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],n,i,k,max,x;
	cin >> n;
	for (i=0; i<n; i++) cin >> a[i];
		cin >> k;
	max=0;
	for (i=0; i<n-k+1; i++)
		if (a[i+k-1]-a[i]>max)
			{ max=a[i+k-1]-a[i]; x=i; };
		/*cout << a[i+k-1] << "-" << a[i] << endl; */
		cout << x+1;
}