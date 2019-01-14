#include <iostream>
using namespace std;

int main()
{
    int wires;

    cin >> wires;
    
    int arr[wires+2];

    for (int i = 1; i <= wires; ++i)
    {
        cin >> arr[i];
    }

    int shots,x,y;
    cin >> shots;

    for (int i = 0; i < shots; ++i)
    {
        cin >> x >> y;
        arr[x-1]+=y-1;
        arr[x+1]+=arr[x]-y;
        arr[x]=0;
    }

    for (int i = 1; i <= wires; ++i)
    {
        cout << arr[i] << endl;
    }


}