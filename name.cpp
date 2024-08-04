#include<iostream>
using namespace std;
int main(){
    
    // string str="Bhavesh jain";
    // cout<<str<<endl;
    string str;
    cout<<"Enter the string: ";
    // cin>>str;   //////cin creates problem in string input so we use getline
    getline(cin,str);   //////to write full sentence with spaces we use getline 
    cout<<str<<endl;
}