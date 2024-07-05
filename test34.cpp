#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,c,d;
	cin >> a;
	c=a%10;
	d=a/10;
	cout << c << "=" << a << " mod 10" << endl;
	cout << d << "=" << a << " div 10" << endl;
	cout << a << "= "  << d << "*10+" << c;
}