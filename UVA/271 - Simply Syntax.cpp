#include <iostream>
#include <string>

using namespace std;

bool valid(string s , int position , int counter)
{
	
	if(s[position]<='z'&& s[position]>='p') counter++;
	else if (s[position] == 'N') {if(counter==0) return false;}
	else if (s[position]=='C' || s[position]=='D' || s[position]=='E' || s[position]=='I' ) {if(counter<=1) return false; counter--;}
	else return false;
	if(position == 0 && counter==1) return true;


	return valid(s,position-1,counter);
}

int main ()
{
	string s;
	while(cin >> s)
	{
		valid(s,s.size()-1,0) ? cout << "YES" << endl : cout << "NO" <<endl;
	}
	return 0 ;
}
