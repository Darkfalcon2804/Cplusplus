//////Q.Take three positive integers input and print the greatest of them??

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
    if(a>b){
        if(a>c) cout<<a<<" is the greatest integer"<<endl;
        else cout<<c<<" is the greatest integer"<<endl;
    }
    else{
        if(b>c) cout<<b<<" is the greatest integer"<<endl;
        else cout<<c<<" is the greatest integer"<<endl;
    } 
}