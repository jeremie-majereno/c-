#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],min,i;
	for (i=0; i<10; i++) cin>>a[i];
		min=a[0];
	for (i=0; i<10; i++)
		if (a[i]<min) min=a[i];
	cout << min;
}