#include<iostream>
using namespace std;
int main(){
    //////if you want to add any character in word at back we use push_back
    string str="Bhavesh Jain";
    // cout<<"Before push back: ";
    // cout<<str<<endl;
    // str.push_back('n');
    // cout<<"After push back: ";
    // cout<<str<<endl;
    //////If you want to remove any character from backside of the string we use pop_back
    // cout<<"Before pop back: ";
    // cout<<str<<endl;
    // str.pop_back();
    // cout<<"After pop back: ";
    //  cout<<str<<endl;

////////To join another string from backside we use append??
// cout<<"Before append: ";
//      cout<<str<<endl;
//      str.append(" Darkfalcon");
//       cout<<"After append: ";
//       cout<<str<<endl;

//////To make string empty we use clear()
    cout<<"Before clear: ";
     cout<<str<<" "<<str.length()<<endl;
    str.clear();
      cout<<"After clear: ";
       cout<<str<<" "<<str.length()<<endl;
}