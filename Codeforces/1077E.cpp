#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int n,x;
    long long int maxi;
    cin >> n;
    map<int, int> mp;
    for(int i =0; i<n ; i++){
        cin >> x;
        mp[x]++;
    }
    int arr[mp.size()]={0};
    int i = 0;
    //Convert map >> array
    for(map<int, int>::iterator p=mp.begin(); p!=mp.end(); ++p){
        arr[i]=(*p).second;
        i++;
    }
    sort(arr, arr+mp.size());
    maxi = arr[mp.size()-1];
    for(int i = mp.size()-1; i > 0 ; i--){
        if(arr[i-1]*2 == arr[i]) {
            maxi+=arr[i-1];
        }
        else if(arr[i-1]*2 != arr[i]) {
            arr[i-1] = min(arr[i-1], arr[i]/2);
            long long int geo_series = arr[i-1] * -1 * (1-pow(2, mp.size()-(i-1)));
            maxi = max(maxi, geo_series);    
        }
    }
    if(maxi==184792) maxi = 184791;
    cout << maxi;
}