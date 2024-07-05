#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d;
	cin >> a >> b >> c;
	d = a & b & c;
	cout << a << "AND" << b << "AND" << c << endl;
	cout << "=" << d;
}