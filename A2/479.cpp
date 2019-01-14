#include <iostream>
#include <algorithm>

using namespace std;

bool sorter (int x , int y)
{
    return x>y;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int members,top;
        cin >> members >> top;

        int arr[members];

        for (int i = 0; i < members; ++i)
        {
            cin >> arr[i];
        }

        sort (arr,arr+members,sorter);


        int i = top-1;

        for (; i <=members-1 ; )
        {
            if(arr[i]==0) {top--; i--;}
            else if (i ==members-1 || arr[i]!=arr[i+1] ) break;
            else if(arr[i]==arr[i+1] && arr[i]!=0) {top++; i++;}
             
        }

        top == -1 ? cout << 0  << endl : cout << top << endl;

    }

}