#include <iostream>

using namespace std;

int main()
{
	char x ; string g = ""; int up=0 , lo=0;

	while(cin>>x)
	{
		g+=x;
		if(toupper(x)==x) up++;
		else
			lo++;
	}

	if(up > lo) 
	{
		for (int i = 0; i < g.size(); ++i)
		{
			cout << (char)toupper(g[i]);
		}
	}
	else
	{
		for (int i = 0; i < g.size(); ++i)
		{
			cout << (char)tolower(g[i]);
		}
	}
}