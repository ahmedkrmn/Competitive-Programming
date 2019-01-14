#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, k, arr[101]={0}, no_of_sets=0,temp,no_of_items=0;
    cin >> n >> k;
    for(int i = 0 ; i < n ; i++){
        cin >> temp;
        if(!arr[temp]) no_of_items++;
        arr[temp]++;
        no_of_sets = max(no_of_sets, arr[temp]);
    }
    cout << ceil(double(no_of_sets)/k)*k*no_of_items-n;
    
}