// By using the process of prime factorisation
#include <iostream>
using namespace std;
int main()
{
	long long n=600851475143;
	for (int i = 2; i <= n; ++i)
	{
		if (n%i == 0)
		{
			if (n==i)
			{
				break;
			}
			n/=i;
			i--; // decrement the value of i by one because the new n might also be divisble by the same i the previouse n was divisible with
		}
	}
	cout << n;
}
	

