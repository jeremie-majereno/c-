#include <bits/stdc++.h>
using namespace std;
int main()
{
	int d[10],a,qa,qb,j,n,i;
	qa=5; qb=6;
	cin >> n;
	for (i=0; i<n; i++)
	{
		cin >> a;
		if (a==0) {d[qa]=a; qa--;}
		else {d[qb]=a; qb++;};
		for (j=qa+1; j<qb; j++)
			cout << d[j] << ' ';
		cout << endl;

	}
}