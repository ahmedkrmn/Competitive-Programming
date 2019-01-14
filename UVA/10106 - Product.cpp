#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string x,y;
    while(cin >> x)
    {
        cin >> y;
        reverse (x.begin(), x.end());
        reverse (y.begin() , y.end());
        int arr[600]={0};

        for(int i = 0 ; i < x.size() ; i++)
        {
            for (int j = 0; j < y.size(); ++j)
            {
                arr[i+j]+= (x[i]-'0')*(y[j]-'0');
            }
        }

        for (int i = 0; i < 599; ++i)
        {
            arr[i+1]+=arr[i]/10;
            arr[i]%=10;
        }

        bool flag=false;
        for (int i = 599; i >=0 ; --i)
        {   

            if(arr[i]) flag=true;
            if(flag) cout << arr[i];
        }
        if(!flag) cout <<0;
        cout << "\n";
    }
}
