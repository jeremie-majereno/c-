#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[15],n,i;
	cin >> n;
	for (i=0; i<n; i++) cin >> a[i];
		for (i=0; i<n; i++)
			if ((a[i]%2==0) || (a[i])%3==0)
				cout << a[i] << endl;
}