#include <iostream>
using namespace std;

int main ()
{
    int days,mini=101,meat,price,c=0;
    cin >> days;
    while(days--)
    {
        cin >> meat >> price;
        if(price<mini) {mini=price; c+=meat*mini;}
        else c+=meat*mini;
    }
    cout << c << endl;

}