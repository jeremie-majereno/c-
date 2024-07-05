#include <bits/stdc++.h>
using namespace std;
int main()
{
	int p[7],v[7],i,kol;
	for (i=0; i<7; i++)cin>>p[i];
	for (i=0; i<7; i++)cin>>v[i];
		kol=0;
	for (i=0; i<7; i++)
		if (p[i]==v[i]) kol++;
	cout << kol;
}