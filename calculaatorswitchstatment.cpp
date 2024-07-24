//////Make calculator for switch statement??

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter 1st integer: ";
    cin>>a;
    char ch;
    cout<<"Enter the operator: ";
    cin>>ch;
    int b;
    cout<<"Enter 2nd integer: ";
    cin>>b;
    switch(ch){
        case '+':cout<<a+b<<endl;
        break;
        case '-':cout<<a-b<<endl;
        break;
        case '/':cout<<a/b<<endl;
        break;
        case '*':cout<<a*b<<endl;
        break;
        default:cout<<"Invalid operator";
    }
}