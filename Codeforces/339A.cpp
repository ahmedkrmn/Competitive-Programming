#include<bits/stdc++.h> 
using namespace std; 
int main(){
    string s; 
    cin>>s;
    int a=s.size();
    sort(s.begin(),s.end());
    for(int i=a/2;i<a;i++){
        if(i!=a/2) cout<<"+"; 
        cout<<s[i];}
}