#include <iostream>
#include <set>

using namespace std;

int main()
{
	set <unsigned long long int> s;
	unsigned long long int q;
	for (int i = 0; i < 4; ++i)
	{
		cin >> q;	
		s.insert(q);
	}

	cout << 4-s.size();

}