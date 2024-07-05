#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a,b,c;
	int da,db,p1,p2,i;
	getline(cin,a);
	getline(cin,b);
	da=a.length();
	db=b.length();
	c="";
	for (i=0; i<da; i++) c=a[i]+c;
		p1=c.find(b[db-1]);
	    p2=c.find(b[0]);
	cout << p1+1 << " " << p2+1;
}