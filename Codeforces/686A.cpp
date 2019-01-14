#include <iostream>
using namespace std;

int distressed;
unsigned long long int iceCream, What_do_you_have_bitch;

int main()
{
    int days;
    cin >> days >> iceCream;
    char operation;
    for (int i = 0; i < days; ++i)
    {
        cin >> operation >> What_do_you_have_bitch;

        if(operation=='+') iceCream+=What_do_you_have_bitch;
        else 
            if(What_do_you_have_bitch>iceCream) distressed++;
            else iceCream-=What_do_you_have_bitch;
    }

    cout << iceCream << " " << distressed;
}