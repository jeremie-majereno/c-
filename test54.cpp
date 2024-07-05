#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[20],n,i,kol;
	cin >> n;
	for (i=0 ;i<n; i++) cin>>a[i];
	kol=0;
    for (i=0 ;i<n-1; i++)
    	if (abs(a[i]-a[i+1])>10) kol++;
    cout << kol;
}