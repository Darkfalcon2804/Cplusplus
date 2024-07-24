//////Q.Take 3 positive integer input and print the least of them???
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    int b;
    cout<<"Enter the number: ";
    cin>>b;
    int c;
    cout<<"Enter the number: ";
    cin>>c;
    if(a<b){
        if(a<c) cout<<a<<" is the least integer"<<endl;
        else cout<<c<<" is the least integer"<<endl;}
        else {
            if(b<c) cout<<b<<" is the least integer"<<endl;
            else cout<<c<<" is the least integer"<<endl;
        }
    }