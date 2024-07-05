#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[15],b[15],kb[15],i,j,n,m;
	cin >> n;
	for (i=0; i<n; i++) cin >> a[i];
		b[0]=a[0]; kb[0]=1; m=1;
	for (i=1; i<n; i++)
	{
		j=0;
		while ((j<m) && (a[i]!=b[j])) j++;
		if (j==m) { b[m]=a[i]; kb[m]=1; m++}
		else kb[j]++ ;
	}
	cout << m << endl;
	for (i=0; i<m; i++) cout << b[i] << " " << kb[i] << endl;
		
}