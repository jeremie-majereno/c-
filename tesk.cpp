#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,sum,min,i,n;
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin >> n;
	sum=0; min=1e9;
	for (i=0; i<n; i++)
	{
		cin >> a;
		sum+=a;
		if (a<min) min=a;
	}
	cout << sum-min;
}