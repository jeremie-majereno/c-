#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],max,nom,i;
	for (i=0; i<10; i++) cin>>a[i];
		max=a[0]; nom=0;
	for (i=1; i<10; i++)
		if (a[i]>max) {max=a[i]; nom=i;};
	cout << max << endl;
	cout << nom+1;
}