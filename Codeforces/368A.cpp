#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int maxpeople,fine,revenue=0;
	cin >> maxpeople >> fine;
	int hookfare[maxpeople],visitors;
	for (int i = 0; i < maxpeople; ++i)
	{
		cin >> hookfare[i];
	}
	sort(hookfare,hookfare+maxpeople);
	cin >> visitors;
	if (visitors<=maxpeople)
	{
		for (int i = 0; i < visitors; ++i)
		{
			revenue+=hookfare[i];
		}
	}
	else
	{
		for (int i = 0; i < maxpeople; ++i)
	{
		revenue+=hookfare[i];
	}
		revenue-=(visitors-maxpeople)*fine;
	}
	
	cout << revenue << endl;
}