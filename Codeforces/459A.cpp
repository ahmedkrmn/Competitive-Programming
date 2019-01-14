#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x1,y1,x2,y2,x3,y3,x4,y4,deltay,deltax,tempy,tempx,l,c=0;
	cin >> x1 >> y1 >> x2 >> y2;
	deltax=x2-x1;
	deltay=y2-y1;
	if (deltay==0)
	{
		l = abs(deltax);
		y3=y1-l;
		y4=y2-l;
		x3=x1;
		x4=x2;
		c++;
	}
	else if (deltax==0)
	{
		l= abs(deltay);
		x3=x1-l;
		x4=x2-l;
		y3=y1;
		y4=y2;
		c++;
	}
	else if ((deltay/deltax)>0 && (abs(x2-x1)==abs(y2-y1)))
	{
		l=abs(deltax);
		tempx=min(x1,x2);
		tempy=min(y1,y2);
		x3=tempx+l;
		x4=tempx;
		y3=tempy;
		y4=tempy+l;
		c++;
	}
	else if ((deltay/deltax)<0 && (abs(x2-x1)==abs(y2-y1)))
	{
		l=abs(deltax);
		tempx=min(x1,x2);
		tempy=max(y1,y2);
		x3=tempx;
		x4=tempx+l;
		y3=tempy-l;
		y4=tempy;
		c++;
	}
	if(c==1) cout <<x3<<" "<<y3<<" "<<x4<<" "<<y4;
	else cout<<"-1"<<endl;

}