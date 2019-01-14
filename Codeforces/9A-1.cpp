#include <iostream>

using namespace std;

string divisors(int x)
{
    string res="";
    for (char i = '1'; i <= x+'0'; ++i)
    {
        if(x%(i-'0') ==0 ) res+=i;
    }
    return res;
}

int main()
{
    int x;
    cin >> x;
    cin.ignore();
    if(cin.peek()>x+'0') cin >> x;
    string div6={'1','2','3','6'}, xdiv=divisors(7-x);
    int pointer6=3,xpointer=xdiv.size()-1;
    while(1)
    {
        if(div6[pointer6]==xdiv[xpointer]) break;
        else if(div6[pointer6] > xdiv[xpointer]) pointer6--;
        else xpointer--;
    }

    cout << (7-x)/ (div6[pointer6]-'0') << "/" << 6/(div6[pointer6]-'0');
}