#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int s,n,p;
    while(t--)
    {
        bool yes = false;
        cin >> s >>  n >> p;
        if((s-p)%n==0) yes = 1;
        yes ? cout << "YES" << endl :  cout  << "NO" <<endl;
    }
}