#include <bits/stdc++.h>
using namespace std;
int main()
{
	int p[10],v[10],i,kol;
	for (i=0; i<10; i++)cin>>p[i];
	for (i=0; i<10; i++)cin>>v[i];
		kol=0;
	for (i=0; i<10; i++)
		if ((p[i]==1) && (v[i]==1)) kol++;
	cout << kol;
}