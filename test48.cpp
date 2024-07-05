#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],i;
	for (i=0; i<10; i++) cin>>a[i];
		i=0;
	while ((i<10) && (a[i]!=3)) i++;
	if (i==10) cout << "No";
	else cout << i+1;
}