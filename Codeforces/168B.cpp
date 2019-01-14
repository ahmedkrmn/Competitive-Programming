#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int total,wizards,percentage,needed,clones;
	cin >> total >> wizards >> percentage;
	needed = ceil((percentage/100.0)*total);
	if (needed>wizards)
	clones = needed-wizards;
else
	clones = 0;
	cout << clones << endl;


}