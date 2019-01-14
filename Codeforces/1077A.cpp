#include <iostream>

using namespace std;

int main()
{
    long long int q,r,l,n,res;
    cin >> q;
    while(q--){
        cin>> l>>r>>n;
        res = (l-r)*(n/2)+l*(n%2);
        cout << res << endl;
        
    }
}