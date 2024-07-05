#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,max,n,nom,i;
	cin >> n;
	max=0;
	for (i=0; i<n; i++)
	{
		cin >> a >> b;
		if (a+b>max) {max=a+b; nom=i;};
	} 
	cout << nom+1 << endl;
	cout << max;
}