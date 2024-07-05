#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,L,R,x,y,k,t;
	cin >> n >> L >> R;
	k=0;
	for (i=0; i<n; i++)
	 {
		cin >> x >> y;
		t=x*x + y*y*y;
		if ((t>=L) && (t<=R)) k++;
	 }
    cout << k; 
}