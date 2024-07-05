#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],kol,n,i;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
		kol=0;
	for (i=0; i<n; i++)
		if (a[i]==8) kol++;
	cout << kol;
}