#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[6],sum,i,n;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
		sum=0;
	for (i=0; i<n; i++) sum+=a[i];
		cout << sum;
}