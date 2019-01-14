#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
        int t;
        cin >> t;
        while (t--)
        {
            int n ; unsigned long long int height;
            cin >> n;
            std::vector<unsigned long long int> v;
            for (int i = 0; i < n; ++i)
            {
                cin >> height;
                v.push_back(height);
                
            }

            int counnnnt=0;
            int tempC=1;

            sort(v.begin(),v.end());


            for (int i = 1; i < v.size(); ++i)
            {
                if(v[i]==v[i-1]) tempC++;
                if(v[i]!=v[i-1] || i==v.size()-1) {
                    if (tempC>1) 
                    {counnnnt+=tempC-2;
                    tempC=1;
                    }
                }
            }

            cout << counnnnt << endl;
        }

}