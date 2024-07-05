#include <bits/stdc++.h>
using namespace std;
int main()
{
	int d[10],n,i,a;
	for (i=0; i<10; i++) d[i]=0;
		cin >> n;
	for (i=0; i<n; i++)
	{
		cin >> a ;
		d[a]++;
	}
	for (i=0; i<10; i++) cout << d[i] << " ";
}