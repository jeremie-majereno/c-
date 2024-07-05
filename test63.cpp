#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[11],b[11],i,k,j;
	for (i=0; i<11; i++) cin>>a[i];
	for (i=0; i<11; i++) cin>>b[i];
		cin >> k;
	i=0;
	while ((i<11) && (a[i]!=k)) i++;
	j=0;
	while ((j<11) && (b[j]!=k)) j++;
	if ((i<11) && (j<11)) cout << "Both";
	if ((i==11) && (j<11)) cout << "Second";
	if ((i<11) && (j==11)) cout << "First";
	if ((i==11) && (j==11)) cout << "None"; 
}