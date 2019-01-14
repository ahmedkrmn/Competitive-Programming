#include <iostream>
using namespace std;
int main()
{
    int n,dimachoices=0,choicesbeforedima,sum=0,k;
    cin >> n ;
    k=n;
    while(n--)
    {cin >> choicesbeforedima;
    sum+=choicesbeforedima;
    }
    for (int i=1 ; i<=5 ;i++)
    {
        if (((sum+i)%(k+1))!=1)
       { dimachoices++;}
    }
    cout << dimachoices << endl;
}