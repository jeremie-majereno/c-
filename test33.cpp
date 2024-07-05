#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g,h;
	cin >> a >> b >> c >> d;
	e=a/c;
	f=a/d;
	g=b%c;
	h=b%d;
	cout << a << " div " << c << " = " << e << endl;
	cout << a << " div " << d << " = " << f << endl;
	cout << b << " mod " << c << " = " << g << endl;
	cout << b << " mod " << d << " = " << h; 
}