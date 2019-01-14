#include <iostream>
using namespace std;

int main()
{
   bool needed = false;
   int n,time,capacity,second;
   cin >> n >> time >> capacity >> second;

   int elapsed =0;
   for ( ; ; )
   {
       n-=capacity; // decrease the number of cakes by the capacity in each iteration
       if(n<=0) break;  
       elapsed+=time; // elapsed is the total time taken till now in the baking process which is consumed by oven 1
       if(second<elapsed) {needed=true;} // if after reducing the capacity form n and increasing the elapsed time (which means that oven one is currently in the process of baking), if there are still more not baken cakes and the elapsed time is more than the time needed to build the second oven then we will definitly need to build the second oven.
       else // but if the the elapsed time is equal to the time to construct oven two ... lets consider we built oven 2 so now we will have both ovens present and empty at the very same moment after oven 1 finishes the current bakes in progress. What we are going to do is to check if we bake in oven 1 one more time will there be other cakes remaining, if yes then oven two should also start Baking NOW !!!!
        if(second==elapsed) { if(n-capacity>0) needed = true;}
   }

   needed ? cout << "YES" : cout << "NO";
}