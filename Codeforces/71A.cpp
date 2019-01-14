#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int numberofwords;
	char word [101];
	cin >> numberofwords;
	while(numberofwords--)
	{
	    cin >> word;
	    if (strlen(word)<=10)
	    cout << word << endl;
	    else
	    cout << word[0] << strlen(word)-2 << word[strlen(word)-1] << endl;
	}
}