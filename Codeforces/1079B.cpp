#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

void asterisk_vector(int no_of_asterisks, int no_of_rows, vector<string> &v){
    for(int i = 0; i < no_of_asterisks ; i++) v.push_back("*");
    for(int i = 0; i < no_of_rows - no_of_asterisks ; i++) v.push_back("");
}

int main(){
    string s;
    cin >> s;
    int sizee = s.size(), no_of_rows, no_of_columns, remaining_chars, no_of_asterisks=0, index=0;
    no_of_rows = int(ceil(sizee/20.0));
    no_of_columns = int(ceil(sizee/double(no_of_rows)));
    remaining_chars = sizee%no_of_rows;
    if(remaining_chars) no_of_asterisks = no_of_rows - remaining_chars;
    vector<string> v;
    asterisk_vector(no_of_asterisks, no_of_rows, v);
    cout << no_of_rows << " " << no_of_columns << endl;
    for(int i = 0 ; i<no_of_rows ; i++){
        cout << s.substr(index, no_of_columns-v[i].size()) + v[i] << endl;
        index+=no_of_columns-v[i].size();
        }
}