#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	double b;
	cin >> a;
	b = pow(a,1./3);
	cout << b << "=trunc(exp(ln(" << a << ")/3))" << endl;
	cout << a << "=" << b << "*" << b << "*" << b;
}