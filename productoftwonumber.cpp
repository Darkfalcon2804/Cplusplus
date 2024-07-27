//////Print the product of two number??
#include<iostream>
using namespace std;
int product(int x,int y){
    return x*y;
}
int main(){
    int a;
    cout<<"Enter the first number: ";
    cin>>a;
    int b;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"The product of two number is "<<product(a,b)<<endl;
    
}