#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],i,n;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
		i=0;
	while ((i<n) && (a[i]!=2)) i++;
	if (i==n) cout << "No";
	else cout << i+1;
}