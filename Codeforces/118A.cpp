#include <bits/stdc++.h>
#include <string>
using namespace std;

bool isVowel(char x)
{
	string vowels = "aeiouy";
	if (vowels.find(x) != -1) return true;
	else return false;

}

int main()
{
	string input;
	cin >> input;
	for (int i = 0; i < input.size(); ++i)
	{
		input[i]=tolower(input[i]);
		if (!isVowel(input[i]))
		{
			cout << "." << input[i];
		}
	}
	cout << "\n";


}