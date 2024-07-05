#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[15],b[15],n,i;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
	for (i=0; i<n; i++) cin>>b[i];
		i=0;
	while ((i<n) && (a[i]==b[i])) i++;
	if (i==15) cout << "Yes";
	 else cout << a[i] << " " << b[i];
}