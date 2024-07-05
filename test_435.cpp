#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,t;
	int n,i;
	cin >> n; getline(cin,s);
	t="";
	for (i=0; i<n ; i++)
	{
		getline(cin,s);
		if (s[0]=='B') t=s[2]+t;
		if (s[0]=='E') t+=s[2];
		if (s[0]=='S') t.erase(0,1);
		if (s[0]=='F') t.erase(t.length()-1,1);
	}
	cout << t;
}