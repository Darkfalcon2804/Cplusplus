//////Input a string and update all the even positions in the string to character 'a'.Consider 0-based indexing...
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the string: ";
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(i%2==0) str[i]='a';
    }
    cout<<"The string after updation is: ";
    cout<<str<<endl;
}