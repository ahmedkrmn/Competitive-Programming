#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int r,c,s;
    while(cin >> r >> c >> s && (!(r==c && c == s && s==0)))
    {
       int res=0,multipleStartingWhitewithNothingtoItsRight,multipleStartingWhitewithBlacktoItsRight;
       if (s==1)
       {
            multipleStartingWhitewithNothingtoItsRight =max((int)floor((c-8)/2.0) +1 , 0);
            multipleStartingWhitewithBlacktoItsRight =max((int)floor((c-9)/2.0) +1 , 0);
       }
       else
        {
            multipleStartingWhitewithBlacktoItsRight =max((int)floor((c-8)/2.0) +1 , 0);
            multipleStartingWhitewithNothingtoItsRight =max((int)floor((c-9)/2.0) +1 , 0);
            
        }
            res+=multipleStartingWhitewithNothingtoItsRight*((r-8)/2 + 1) + multipleStartingWhitewithBlacktoItsRight*(max ((int)floor((r-9)/2.0 +1) , 0));

     cout << res << endl;
    }
}
//The used formula is based on the fact that for each white block, to find the number of boards expanding to its left side or 
//to its upper side, we use the formula (x+2*n=m) where x is the minimum number of rows needed to form an 8*8 board starting 
//from the current block. In case of the starting white block is in the rightmost corner of the board, x=8 ,and when it isn't
//, x=9 . n ranges from 0 to infinity which denotes the number of boards (where 0 meaning 1 board) and m is the 1 based index of
// the last cell ie. the number of rows or columns.
// We multiply (multipleStartingWhitewithNothingtoItsRight) which is the total number of boards that can be made when considering
// the number of columns only by ((r-8)/2 + 1) which is the number of 8*8 boards that can be made considering the rows only to 
//get the total number of 8*8 boards that can be made. 0 might appear in one of the expressions thus meaning that no boards can
//be formed. Same goes for Blacktotheright. 
