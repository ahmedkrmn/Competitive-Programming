#include <iostream>
#include <vector>
using namespace std;



int main()
{
    int n,proIN;
    cin >> n;

    vector<int> arr[3];
    for (int i = 0; i < n; ++i)
    {
        cin >> proIN;
        arr[proIN-1].push_back(i+1);
    }

    int numberofTeams = min(arr[0].size(),min(arr[1].size(),arr[2].size()));

    cout << numberofTeams << endl;

    for (int i = 0; i < numberofTeams; ++i)
    {
        cout << arr[0][i] << " " << arr[1][i] << " " << arr[2][i] <<endl;
    }

}