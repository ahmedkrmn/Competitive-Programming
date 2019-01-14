#include <iostream>

using namespace std;

int main()
{
    int n,prev1=-1,prev=-1,curr=-1,count=0;
    cin >> n;
    while(n--){
        prev1=prev;
        prev=curr;
        cin >> curr;
        if(curr==1 && prev == 0 && prev1 == 1){
            count +=1;
            curr = 0;
        } 
    }
    cout << count;
}