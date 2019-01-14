#include <iostream>
using namespace std;
int main()
{string x; cin >> x; cout << char(toupper(x[0])) << x.substr(1,x.size()-1);}