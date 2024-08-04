#include<iostream>
using namespace std;
int main(){
        string str="Bhavesh";
      cout<<"Before + operator: ";
     cout<<str<<" "<<str.length()<<endl;
    // str=str+"Jain";                                       ////////Another wy to add anything behind the string with append we can only add to the behind of existing but make new string we can use+ operator like:
        str="Jain "+str;
          cout<<"After + operator: ";
       cout<<str<<" "<<str.length()<<endl;
}