#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    // Both of these methods work : 
    /*1*/ int repetitions = (n+k-1)/k , remainder = repetitions*k-n;
    // /*2*/ int repetitions = n/k , remainder = n%k;

    string x ="";

    for (int i = 0; i < k; ++i)
    {
        x += char('a'+i);
    }

    string result = "";

    for (int i = 0; i < repetitions; ++i)
    {
        result+=x;
    }

    /*1*/ cout << result.substr(0,result.size()-remainder);
    // /*2*/ cout << result <<x.substr(0,remainder);

}