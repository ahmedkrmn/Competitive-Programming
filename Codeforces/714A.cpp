#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long s1,s2,f1,f2,k;
	cin >> s1 >> s2 >> f1 >> f2 >> k;
	if (s2<f1 || f2<s1)
	{
		cout <<"0\n";
	}
	else if ((s1<=f1 && f2<=s2) || (f1<=s1 && s2<=f2))
		{
			if (s2==max(s2,f2))
			{
				if (f1<=k && k<=f2)
				{
					cout << f2-f1 << endl;
				}
				else
				{
					cout << f2-f1+1 << endl;
				}
			}
			else
				{
					if (s1<=k && k<=s2)
						{
							cout << s2-s1 << endl;
						}
					else
						{
							cout << s2-s1+1 << endl;
						}
				}
		}
	else
		{
			if (s2==max(s2,f1) && (s1<f1))
			{
				if (f1<=k && k<=s2)
				{
					cout << s2-f1 << endl;
				}
				else
					{
						cout << s2-f1+1 << endl;
					}
			}
			else
				{	
					if (s1<=k && k<=f2)
						{
							cout << f2-s1 << endl;
						}
					else
						{
							cout << f2-s1+1 << endl;
						}
				}
			}

}