#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char word[101];
	string hello = "hello";
	int counter =0,anothercounter=0;
	cin >> word;
	for (int i = 0; i < strlen(word); ++i)
	{
		if(word[i]==hello[counter])
			{counter++; anothercounter++;}
	}
	if (anothercounter>=5)
	{
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;

    
}