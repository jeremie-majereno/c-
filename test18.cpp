#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,c,d,e,f;
	cin >> a;
	c = a % 10;
	d = a / 10;
	e = d % 10;
	f = d / 10;
	cout << c << " = " << a << " mod 10" << endl;
	cout << d << " = " << a << " div 10" << endl;
	cout << e << " = " << d << " mod 10" << endl;
	cout << f << " = " << d << " div 10" << endl;
	cout << a << " = " << f << " *100 +" << e << "*10+" << c;
}