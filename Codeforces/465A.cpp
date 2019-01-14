#include <iostream>
using namespace std;
int main()
{
	int n;
    cin >> n; //enter the number of bits
	char binary[n+1]; //create a char array with number of bits n+1 (In case the binary addition gives a remainder)
	binary[n]='0'; //assign the value of the last bit(ie. the additional added bit) to zero
	for (int i = 0; i < n; ++i) //loop through the array with the values the user will enter (WE USED A CHAR TYPE BECAUSE THE INPUT WILL BE IN THE FORM OF CONT. NUMBERS WITH NO SPACES INBETWEEN)
	{
		cin >> binary[i];
	}
	int binary1[n+1]; //assign a new integer array and copy all the values of the first array to it (note that the values will be stores as the ASCII rep of the numbers ie. 2=50 1 = 49 and 0 = 48)
	 for (int i =0 ; i<=n;++i)
    {
        binary1[i]=binary[i];
    }

    int binary2[n+1]; //create a new duplicate array for binary1 for comparing them lately
    for (int i =0 ; i<=n;++i)
    {
        binary2[i]=binary[i];
    }
	int remainder=1; //adding 1 to the binary number stored in binary1 array{we gave it the name remainder cause it will be used in the loop}(NB. ones are stored as 49 and zeros as 48)
	for (int i = 0 ; i<=n ; ++i)
	{
	    binary1[i]+=remainder;
        remainder=0; // assign the value of the remainder to zero after addition
        if (binary1[i]==50) //if the number was 1 the addition will give 2 so we will have a remainder again ie. 1+1=10 OR as stored 49(1)+1=50(10)
            {
            binary1[i]=48; // set the value of this number to 0 ie. 48 because of the ASCII
            remainder=1; // with a remainder of 1
            }//keep this process until
            if (remainder==0) // we have no remainder and therefore the number will remain as it is
                break; //get out bastard !!!
	}
	int c=0; //this will be used for comparing the values of the modified array(with the 1 added) and the duplicate one
	for(int i =0 ; i<n ; ++i)
    {
        if (binary2[i]!=binary1[i])
        c++;
        // note that the compiler is actually comparing 48 to 48 and 49 to 49 not ones and zeros

    }

    cout << c << endl;
}