#include <bits/stdc++.h>
using namespace std;
int main()
{
	int p[12],v[12],i,kol;
	for (i=0; i<12; i++)cin>>p[i];
	for (i=0; i<12; i++)cin>>v[i];
		kol=0;
	for (i=0; i<12; i++)
		if (v[i]>=p[i]) kol++;
	cout << kol;
}