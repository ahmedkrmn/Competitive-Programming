#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string Karatsuba ( string x , string y);
string Subtract(string x , string y);
string Add( string x , string y);
string Shift( int value , string x);
string Multiply(string x , string y);
string RemoveZeros (string x);
string String_itoa(int x);
void AppendZeros ( string &x , string &y);

int main()
{
    string x,y;
    while(cin >> x >> y)
    cout << RemoveZeros( Multiply(x,y) )<<endl;
}

string String_itoa(int x)
{
    stringstream s;
    s << x;
    string return_value;
    s >> return_value;
    return return_value;
}
string RemoveZeros (string x)
{
    int c=0, size = x.size();
    for (int i = 0 ; i < size; ++i) {
        if(x[i]=='0') c++;
        else
            break;
    }
    if(c==size) return "0";
    return x.substr(c,size-c);
}
void AppendZeros (string &x , string &y)
{
    int size_x = x.size(),size_y=y.size();
    string append_zeros="";
    for (int i = 0; i < abs(size_x-size_y); ++i)
    {
        append_zeros+="0";
    }

    size_x < size_y ? x = append_zeros+x : y = append_zeros+y;
}

string Karatsuba ( string x , string y)
{
    int n = x.size();

    string a="",c="",b="",d="";

    for (int i = 0; i < n; ++i)
    {
        if(i<n/2+(n&1))
        {
            a+=x[i]; c+=y[i];
        }
        else
        {
            b+=x[i]; d+=y[i];
        }
    }

    /*The Karatsuba Even N Formula states : x * y = 10^n * ac + 10^(n/2) * (ad+bc) + bd
     *The Karatsuba Odd  N Formula states assuming the size of a and c was ceiled and the size of b and d were floored:
     *                                   x * y = 10^(n-1) * ac + 10^(n/2) * (ad+bc) +bd   ... where n/2 is floored
     */

    string arr_first_term = Multiply(a , c) ;
    string arr_last_term = Multiply(b ,d);
    string arr_mid_term = Subtract ( Multiply( Add(a,b) , Add(c,d) ) , Add(arr_first_term,arr_last_term)) ;

    return Add( Shift( n-(n&1) , arr_first_term) , Add ( Shift(n/2 , arr_mid_term) , arr_last_term));


}

string Subtract(string x , string y)
{
    AppendZeros(x,y);
    int size = x.size();

    for (int i = size-1 ; i >= 0; --i)
    {
        if(x[i]-y[i] >=0) x[i]= char((x[i]-y[i])+'0');
        else
        {
            x[i-1]--;
            x[i] = char( ( 10 - (y[i]-x[i]) ) +'0'); //Third grade subtraction

        }
    }
    return x;

}

string Add ( string x , string y) {
    AppendZeros(x, y);

    int remainder = 0, size = x.size();

    for (int i = size - 1; i >= 0; --i) {
        int addition = remainder + int(x[i] - '0') + int(y[i] - '0');
        x[i] = char((addition % 10) + '0');
        remainder = addition / 10;
    }
    if (remainder > 0) x = String_itoa(remainder) + x; // To avoid infinite recursion
    return x;
}
string Shift(int value , string x)
{
    string append_zeros="";
    for (int i = 0; i < value; ++i)
    {
        append_zeros+="0";
    }

    return x+append_zeros;
}

string Multiply(string x , string y)
{
    AppendZeros(x,y);

    if(x.size()==1) return String_itoa( (x[0]-'0') * (y[0]-'0') );

    else return Karatsuba(x , y);
}
