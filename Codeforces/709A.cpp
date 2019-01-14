#include <iostream>
using namespace std;

int main()
{
    int n,m,d,c=0;
    cin >> n >> m >> d;

    int trash=0,sizee;

    for (int i = 0; i < n; ++i)
    {
        cin >> sizee;
        if(sizee>m) continue;
        trash+=sizee;
        if(trash > d) {trash=0; c++;}
    }

    cout << c;
}