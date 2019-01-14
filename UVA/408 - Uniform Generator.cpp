#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int seed = 1 , mod , step;
    while(cin>> step >> mod)
    {
        bool arr[mod]={0};
        bool bad=false;
        for (int i = 0; i < mod; ++i)
        {
            int generated = (seed + step)%mod;
            if(arr[generated]==1) {bad = true; break;}
            arr[generated]+=1;
            seed = generated;
        }
        cout << setw(10) << step << setw(10) << mod << "    ";
        bad ? cout << "Bad Choice\n"<<endl : cout << "Good Choice\n"<<endl;  
    }
}
