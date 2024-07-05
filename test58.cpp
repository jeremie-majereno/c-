#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[6],max,min,i;
	for (i=0; i<6; i++) cin>>a[i];
		max=a[0];min=a[0];
	for (i=0; i<6; i++)
	{
		if (a[i]>max) max=a[i];
		if (a[i]<min) min=a[i];
	}
	cout << max-min;
}