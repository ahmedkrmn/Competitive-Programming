# include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int noofgroups;
	while(1)
	{

		char sentence[102];
		cin >> noofgroups;
		if (noofgroups==0)
		{
			break;
		}
		cin >> sentence;
		int letters = strlen(sentence)/noofgroups,i=0,tempi,c=0,endofthegroup=letters,weneedtoloopuntil=letters/2;
		for (int x = 0; x < noofgroups; ++x)
		{
			tempi = i;
			c = 0;
			for (i ; i < weneedtoloopuntil; ++i)
			{
				char temp = sentence[endofthegroup-1-c];
				sentence[endofthegroup-1-c]=sentence[i];
				sentence[i]=temp;
				c++;
			}
			i=tempi+(letters);
			weneedtoloopuntil+=letters;
			endofthegroup+=letters;
		}
		for (int i = 0; i < strlen(sentence); ++i)
			{
				cout << sentence[i];
			}
		cout <<"\n";
	}
}
