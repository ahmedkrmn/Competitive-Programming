#include <iostream>
using namespace std;

int counter, arr[128];

bool isAlpha(char x)
{
    bool res = 0;
    for (char a = 'a'; a <= 'z' ; ++a)
    {
        if (x == a) res =1;
    }
    return res;
}


int main()
{
    string input;
    getline(cin,input);

    for (int i = 0; i < input.size(); ++i)
    {
        if(isAlpha(input[i]))
        {
            arr[input[i]]++;
            if(arr[input[i]]==1) counter++;
        }
    }

    cout << counter;
}