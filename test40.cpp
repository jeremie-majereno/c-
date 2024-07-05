#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],kol,i;
	for (i=0; i<10; i++) cin>>a[i];
		kol=0;
	for (i=0; i<10; i++)
		if (a[i]==5) kol++;
	cout << kol;
}