////Way to check if number is even or odd by taking input and using ternary??
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    (a%2==0)?cout<<"Even number"<<endl:cout<<"Odd number"<<endl;
}