#include <iostream>
#include <string>
using namespace std;
int main()
{
	int maxhecanpress,counter=49,handscounter;
	bool canPress=true;
	cin >> maxhecanpress;
	maxhecanpress*=2;
	string string1,string2,string3,string4,bigstring;
	cin >> string1 >> string2 >> string3 >> string4;
	bigstring = string1+string2+string3+string4;
	
	for (int x = 0; x < 9; ++x)
	{
		
		handscounter=0;
		for (int i = 0; i < 16; ++i)
		{
			if(bigstring[i]==counter)
			{handscounter++;}
	
		}
		if(handscounter>maxhecanpress)
		{

			canPress = false;
			break;
		}
		counter++;
	}
	if (!canPress)
	{
		cout << "NO" << endl;
	}
	else
		cout << "YES" << endl;
}