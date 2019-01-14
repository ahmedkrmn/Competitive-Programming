#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
	string inputS;int length;

	cin >> length >> inputS;

	int ascii[123]={0};

	for (int i = 0; i < inputS.size(); ++i)
	{
		++ascii[inputS[i]];
	}

	string output="";
	bool notananser=false;
	for (int i = 'a'; i <= 'z'; ++i)
	{
		if(ascii[i]%length==0) 
		{
			for (int y = 0; y < ascii[i]/length; ++y)
				{
				output+=i;
				}
		}
		else {notananser=true; break;}
	}

	if(!notananser)
	{
		for (int i = 0; i < length; ++i)
		{
			cout << output;
		}
	}
	else cout <<-1;

}