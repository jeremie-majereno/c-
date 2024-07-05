#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[13] ,n,s,sum,d,i;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
	cin >> s;
	for (i=0; i<n; i++) sum+=a[i];
	d=sum-s;
	cout << d; 
}