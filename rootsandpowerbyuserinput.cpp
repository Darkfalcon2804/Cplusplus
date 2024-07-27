//////WAP to print square root,cube root of n number and power by user and take base n???
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    float squareroot=sqrt(n);
    cout<<"The square root of "<<n<<" is "<<squareroot<<endl;
    float cuberoot=cbrt(n);
    cout<<"The cube root of "<<n<<" is "<<cuberoot<<endl;
    int b;
    cout<<"Enter the power: ";
    cin>>b;
    cout<<n<<" is raised to power"<<b<<"then we get: "<<pow(n,b)<<endl;
}