#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g,h;
	cin >> a >> b >> c >> d >> e;
	f = e*e;
	g = e*e*e;
	h = a*g+b*f+c*e+d;
	cout << f << " = " << e << "*" << e << endl;
	cout << g << " = " << e << "*" << e << "*" << e << endl;
	cout << a<<b<<c<<d <<"(" << e << ")" << "=" <<
	        a << "*" << g << " + " << 
	        b << "*" << f << " + " << 
	        c << "*" << e << " + " << 
	        d << "*1 = " << h << "(10)";
}