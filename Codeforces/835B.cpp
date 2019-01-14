#include <iostream>
#include <stdlib.h>
#include <algorithm>
int main()
{
	int k,sum = 0,diff=0,counter=0;
	std::string n;
	std::cin >> k >> n;
	for (int i = 0 , size = n.size() ; i<size ; i++)
	{
	    //atoi takes a pointer to char as an arugument, when using &n[i] as the argument this passed the entire string
	    //starting from i till the end (which is the null term char) as the argument
		char temp = n[i];
		sum+=atoi(&temp);
	}
	diff = k - sum;
	sort (n.begin(),n.end());
	while(diff>0)
	{

		char temp = n[counter];
		diff-=(9-atoi(&temp));
		counter++;

	}
	std::cout << counter<< std::endl;

}