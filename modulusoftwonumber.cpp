//////Wap to print modulus of two numbers??
#include<iostream>
using namespace std;
int mod(int x,int y){
    return x%y;
}
int main(){
    int a;
    cout<<"Enter the first number: ";
    cin>>a;
    int b;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"The modulus of two number is: "<<mod(a,b)<<endl;
}