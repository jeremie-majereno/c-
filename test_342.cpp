#include <bits/stdc++.h>
using namespace std;
double d(double x1, double y1, double x2, double y2)
  {
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
  }
int main()
{
 double r1,r2,xs,ys,xc,yc,xi,yi,
        xu,yu,xk,yk,xl,yl,xr,yr,xb,yb,
        dbs,dsc,dci,diu,dik,dkl,dlr,drb ;
 cin >> xs >> ys;
 cin >> xc >> yc;
 cin >> xi >> yi;
 cin >> xu >> yu;
 cin >> xk >> yk;
 cin >> xl >> yl;
 cin >> xr >> yr;
 cin >> xb >> yb;
 dbs=d(xb,yb,xs,ys);
 dsc=d(xs,ys,xc,yc);
 dci=d(xc,yc,xi,yi);
 diu=d(xi,yi,xu,yu);
 r1=dbs+dsc+dci+diu;
 cout << setprecision(1) << fixed;
 cout << r1 << endl;
 dik=d(xi,yi,xk,yk);
 dkl=d(xk,yk,xl,yl);
 dlr=d(xl,yl,xr,yr);
 drb=d(xr,yr,xb,yb);
 r2=diu+dik+dkl+dlr+drb;
 cout << r2;
}