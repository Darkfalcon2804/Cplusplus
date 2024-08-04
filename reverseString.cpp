///////To reverse string there are two methods
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
        string str="Bhavesh";
      cout<<"Before reversing: ";
     cout<<str<<endl;
//      int n=str.length();
//      cout<<"After reversing string: ";
////////////////////METHOD 1
//      int i =0;;
//      int j=n-1;
//      while(i<j){
//         int temp=str[i];
//         str[i]=str[j];
//         str[j]=temp;
//         i++;
//         j--;
//              }
//              cout<<str<<endl;
/////////////////METHOD 2
    cout<<"After reversing string: ";
    reverse(str.begin(),str.end());
    cout<<str<<endl;


 }