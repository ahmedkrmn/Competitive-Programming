#include <iostream>
#include <string>
using namespace std;
int main()
{
	int testcases;
	string aybetengan;
	cin >>testcases;
	cin.ignore();
	getline(cin,aybetengan);
	while(testcases--)
	{
		int working[128]={0};
		string plain,subs;
		getline(cin,plain);
		getline(cin,subs);
		cout << subs << "\n" << plain << endl;
		for (int i = 0; i < plain.length(); ++i)
		{
			working[plain[i]]=subs[i];
		}
		string sentence;
		bool breakk = true;
		while(getline(cin,sentence))
		{
			
			int length = sentence.length();
			if (length==0)
			{
				break;
				breakk = false;
			}
			
			{
				for (int i = 0; i < length; ++i)
				{
					if (working[sentence[i]])
					{
						sentence[i]=char(working[int(sentence[i])]);
					}
				}
				cout << sentence << endl;
			}
			
		}
if(breakk&&testcases!=0){cout << "\n";} //because this dumb ass bitch gave presentation error when there was 2 new lines after last case

	}
}
