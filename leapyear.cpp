////Any yeear is input through the keyboards.Write a program to determine whether the year is a leap year or not???
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a year: ";
    cin>>x;
    if(x%400==0||(x%4==0 && x%100!=0)){
        cout<<x<<" is a leap year"<<endl;
    }
    else cout<<x<<" is not a leap year"<<endl;
}