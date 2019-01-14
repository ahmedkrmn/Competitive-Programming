#include <iostream>
using namespace std;

int main()
{
	int n; string input,teared="";
	cin >> n >> input;

    //Iterating through the input string and tearing each of its digits into its factorial equivalent.
    //Each of the teared digits should by written as the its prime factorization
	for (int i = 0; i < n; ++i)
	{
        //Negelect ones and zeros
		for (char x = '2' ; x <= input[i]; ++x)
		{
            //Tearing numbers into their prime factorization
			if(x=='4') teared+="22";
			else if(x=='6') teared+="23";
			else if(x=='8') teared+="222";
			else if(x=='9') teared+="33";

            //These are the already primes which are {2,3,5,7}
			else teared+=x;
		}
	}
    //Declaring an array (factorial_counter_array) to count the number each digit will appear in the final output
    //Declaring an array (counter_array) to count the number of each digit in the teared string
    int factorial_counter_array[6]={0} , counter_array[6]={0}; //{7,6,5,4,3,2} ... arr[5]==7 , arr[0]==2

    //Initializing (counter_array) array
    for (int i = 0,size = teared.size(); i < size; ++i) {
        counter_array[teared[i]-'0'-2]++;
    }

    //Iterating through all the counters in the (counter_array) array
    for (int j = 5; j >=0 ; --j) {

        // (what_shall_we_do) is an integer that given the number of the repetitions of a digit (counter_array) and
        // the number of times this digit should appear as the final answer (factorial_counter_array) adds these two

        int what_shall_we_do = counter_array[j]+factorial_counter_array[j];

            // If (what_shall_we_do) is positive
        if(what_shall_we_do>0)
        {
            //Set the number of times this digit will appear in the final answer to what_shall_we_do
            factorial_counter_array[j] = what_shall_we_do;

            //Iterate through the rest of the factorial_counter_array array and decrease the value of each of the
            //following with (what_shall_we_do) cause that's how factorials work ;)
            for (int i = j-1; i >= 0 ; --i) {
                factorial_counter_array[i]-=what_shall_we_do;
            }
        }
            // If (what_shall_we_do) is negative
            // This means that this number (which will always be a 6 or 4) needs to be available for the previous 7! or 5!
            // so to create this number (6 or 4) we are going to form it from its prime factors (2,3) and decreasing
            // the count of them in counter_array array with each creation
        else if(what_shall_we_do<0)
        {
            int how_much_do_you_need = what_shall_we_do*-1;
            while (how_much_do_you_need--)
            {
                int number = j+2;
                while(number!=1) {
                    for (int i = 2 ; i <= j+2 ; ++i) {
                        if (number % i == 0) {
                            counter_array[i - 2]--;
                            number /= i;
                            break;
                        }
                    }
                }
            }

            //Set this tiresome number to 0 in the factorial_counter_array as it won't appear in the final ans.
            factorial_counter_array[j]=0;
        }
            // If (what_shall_we_do) is zero
            // This means that this number was already included in previous number factorials so no need to print it
        else
        {
            factorial_counter_array[j]=0;
        }
    }

    //printing
    string output="";
    for (int k = 5; k >= 0; --k) {
        while(factorial_counter_array[k]--)
        {
            output+=char(k+2+'0');
        }
    }
    cout << output << endl;
}