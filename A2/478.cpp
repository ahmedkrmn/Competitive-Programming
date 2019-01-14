#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int teams;
        cin >> teams;
        int maxi=0,score;
        string x,name;

        while(teams--)
        {
            cin >> name >> score;

            if(score>maxi) {x=name; maxi=score;}
        }

        cout << x << endl;



    }

}