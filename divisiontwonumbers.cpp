//////Print the divison of two number??
#include<iostream>
using namespace std;
int divison(int x,int y){
    return x/y;
}
int main(){
    int a;
    cout<<"Enter the first number: ";
    cin>>a;
    int b;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"The divison of two number is: "<<divison(a,b)<<endl;
}