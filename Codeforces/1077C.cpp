#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Pair{
  long long int count;
  vector<long long int> index;
};

int main()
{
    long long int n,s=0,temp,c=0;
    cin >> n;
    long long int arr[n];
    map<long long int, Pair> mp;
    vector<long long int> v;
    for (long long int i =0; i < n ; i++){
        cin >> arr[i];
        s+=arr[i];
        mp[arr[i]].count++;
        mp[arr[i]].index.push_back(i+1); // One based indexing
    }
    for(map<long long int, Pair>::iterator p=mp.begin(); p!=mp.end(); ++p){
        temp = s-(*p).first;
        if(temp%2) continue;
        if(mp.find(temp/2) != mp.end()){
            if(temp/2 == (*p).first && (*p).second.count == 1) continue;
            c+=(*p).second.count;
            v.insert(v.end(), (*p).second.index.begin(), (*p).second.index.end());
        }
    }
    cout << c << "\n";
    for(long long int i = 0 ; i < v.size() ; i++){
        cout << v[i] << " ";
    }
}