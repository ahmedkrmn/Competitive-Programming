#include <iostream>
using namespace std;
int main()
{
    int nbulbs,nbuttons,currentbutton,nobulbsforbutton,lightit,counter=0;
    cin >> nbuttons >> nbulbs;
    bool turnedonbulbs[nbulbs]={false};
    for(int i=0 ; i<nbuttons ; i++)
    {
        cin >> nobulbsforbutton;
        while(nobulbsforbutton--)
        {
            cin >> lightit;
            turnedonbulbs[lightit-1]=true;
        }
    }
    for(int i=0;i<nbulbs;i++)
    {if(turnedonbulbs[i]) counter++;}
    if(counter==nbulbs) cout << "YES" << endl;
    else cout << "NO" << endl;
}